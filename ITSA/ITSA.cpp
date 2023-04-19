#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int n, s, d, max;
	int time[25] = { 0 };
	cin >> n;
	max = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> s >> d;
		for (int j = s; j < d; j++)
		{
			time[j]++;
		}
		for (int k = 0; k < 25; k++)
		{
			if (time[k] > max)
				max = time[k];
		}
	}
	cout << max << endl;
	return 0;
}