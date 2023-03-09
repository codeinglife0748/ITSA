#include <iostream>  
#include<iomanip>  
using namespace std;
int main()
{
    int a;
    double b;
    cin >> a;
    b = a * 1.6;
    cout << fixed << setprecision(1) << b << endl;
    return 0;
}