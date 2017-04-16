/*
 * ID: raghav
 * PROB: test
 * LANG: C++                  (<-- or C++11 if you prefer)
 * */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    cout << "hello" << endl;
    ofstream fout ("test.out");
    ifstream fin ("test.in");
    int a, b;
    cout << a << "\t" << b << endl;
    fin >> a >> b;
    fout << a+b << endl;
    return 0;
}
