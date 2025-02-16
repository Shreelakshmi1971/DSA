#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e ;  
    cout << a << "\n" << b << "\n" << c << "\n" ;
    cout << fixed << setprecision(3) << d << "\n" ;
    cout <<fixed << setprecision(9) << e << endl ;
    return 0;
}