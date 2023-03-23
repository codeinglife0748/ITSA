#define _CRT_SECURE_NO_DEPRECATE  
#include<iostream>  
#include<iomanip>  
#include<math.h>  
#include<stdio.h>  
#include<stdlib.h>  
using namespace std;
int main() {
    int a, i = 2;
    cin >> a;

    while (i < a)
    {
        i++;
        if (a % i == 0)
        {
            break;
        }
    }
    if (i == a)
        cout << "YES" << endl;
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}