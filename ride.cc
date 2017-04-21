/*
  ID: raghav
  PROG: ride 
  LANG: C++                  
*/
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
    
    for (int i = 0; comet[i] != '\0'; ++i) {
        c_prod *= (comet[i] - 'A' + 1);
    }
    
    for (int i = 0; group[i] != '\0'; ++i) {
        g_prod *= (group[i] - 'A' + 1);
    }

    c_prod = c_prod % 47;
    g_prod = g_prod % 47;
    
    if (c_prod == g_prod)
        fout << "GO\n";
    else
        fout << "STAY\n";

    return 0;
}
