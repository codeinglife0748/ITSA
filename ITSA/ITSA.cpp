#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	long double r, sum;
	long int n, p;
	cin >> r;
	cin >> n;
	cin >> p;

	sum = 0;
	while (n > 0)
	{
		sum += p;
		sum *= (1.0 + r);
		n--;
	}
	cout << (long long)sum << endl;
	return 0;
}