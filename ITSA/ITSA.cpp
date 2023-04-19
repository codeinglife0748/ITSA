#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdio.h>
#include<vector>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	int AAA;
	for (int k = 0; k < AAA; k++) {
		char x1[200] = { '\0' };
		char x2[200] = { '\0' };
		int carry[201] = { 0 };
		int result[201] = { 0 };
		int i;

		cin >> x1 >> x2;

		int len1 = strlen(x1);
		int len2 = strlen(x2);

		strrev(x1);
		strrev(x2);

		int lenmax = len1 * (len1 >= len2) + len2 * (len1 < len2);

		int x11[200] = { 0 };
		for (i = 0; i <= len1 - 1; i++)
		{
			x11[i] = x1[i] - '0';
		}
		int x22[200] = { 0 };
		for (i = 0; i <= len2 - 1; i++)
		{
			x22[i] = x2[i] - '0';
		}

		for (i = 0; i <= lenmax - 1; i++)
		{
			result[i] = x11[i] + x22[i];
			result[i + 1] = 0;
		}

		for (i = 0; i <= lenmax + 1; i++)
		{
			carry[i + 1] = result[i] / 10;
			result[i] = result[i] % 10 + carry[i];
		}

		if (result[lenmax] == 0)
			i = lenmax - 1;
		else
			i = lenmax;
		for (; i >= 0; i--)
			cout << result[i];
		cout << endl;
	}
	return 0;
}