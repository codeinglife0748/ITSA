#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main() {
    // �D��21. �̤j�ȻP�̤p��  
    double num[10];
    double max;
    double min;
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
        if (i == 0)
        {
            max = num[i];
            min = num[i];
        }
        else
        {
            if (num[i] > max)
            {
                max = num[i];
            }
            if (num[i] < min)
            {
                min = num[i];
            }
        }
    }
    cout << fixed << setprecision(2) << "maximum:" << max << endl;
    cout << fixed << setprecision(2) << "minimum:" << min << endl;
    return 0;
}
