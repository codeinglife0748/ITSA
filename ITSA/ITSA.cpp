#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main()
{

	int s[25] = {}, b = 0;
	int l = 0, a, n = 0;
	fill(s, s + 25, 0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> l >> a;
		for (int j = l; j < a; j++)
		{
			s[j]++;
		}
	}
	for (int i = 0; i < 24; i++)
	{
		if (s[i] > b)
		{
			b = s[i];
		}
	}
	cout << b << endl;
}