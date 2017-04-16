/*
 * ID: raghav
 * PROG: ride 
 * LANG: C++                  (<-- or C++11 if you prefer)
 * */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    char comet[8] = {' '};
    char group[8] = {' '};

    fin >> comet >> group;
    int c_prod = 1, g_prod = 1;
    cout << comet << "\t" << group << endl;
    for (int i = 0; i < 6; ++i) {
        cout << comet[i] << group[i] << endl;
        c_prod *= (comet[i] - 'A' + 1);
        g_prod *= (group[i] - 'A' + 1);
    }

    cout << c_prod << " " << g_prod << endl;

    cout << c_prod << " " << g_prod << endl;
    cout << c_prod << " " << g_prod << endl;
    c_prod = c_prod % 47;
    g_prod = g_prod % 47;

    cout << c_prod << " " << g_prod << endl;
    
    if (c_prod == g_prod)
        fout << "GO\n";
    else
        fout << "STAY\n";

    return 0;
}
