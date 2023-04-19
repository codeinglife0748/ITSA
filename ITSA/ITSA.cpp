#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<istream>
#include<sstream>
using namespace std;

int str(string str1, string str2, int fpos = 0, int count = 0) {
    while (1)
    {
        fpos = str2.find(str1, fpos);

        if (fpos != string::npos)
        {
            fpos = fpos + 1;
            count++;
        }
        else
        {
            break;
        }
    }

    return count;
}




int main() {

    string str1, str2;

    getline(cin, str1);
    getline(cin, str2);
    int fpos = 0, count = 0;
    count = str(str1, str2, fpos, count);
    cout << count << endl;
    return 0;
}