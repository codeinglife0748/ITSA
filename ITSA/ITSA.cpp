#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
    int main() {
        // ÃD¥Ø22. °é°é¤e¤e 
        int input[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> input[i][j];
            }
        }
        bool win = false;
        for (int i = 0; i < 3; i++)
        {
            if (input[i][0] == input[i][1] &&
                input[i][1] == input[i][2])
            {
                win = true;
            }
            if (input[0][i] == input[1][i] &&
                input[1][i] == input[2][i])
            {
                win = true;
            }
        }
        if (input[0][0] == input[1][1] &&
            input[1][1] == input[2][2])
        {
            win = true;
        }
        if (input[0][2] == input[1][1] &&
            input[1][1] == input[2][0])
        {
            win = true;
        }
        if (win == true)
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
        return 0;
    }
