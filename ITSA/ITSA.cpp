#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdio.h>
#include <vector>
#include <string>
#include <string.h> 
#include<stdlib.h>
#include<algorithm>
using namespace std;


int main()
{
	string str;
	getline(cin, str);

	transform(str.begin(), str.end(), str.begin(), ::tolower);

	int cnt[256] = {};
	for (int i = 0; i < str.size(); i++) {
		cnt[(int)str[i]]++;
	}
	for (int i = 0; i < 256; i++) {
		if (cnt[i] != 0) {
			cout << (char)i << ": " << cnt[i] << endl;
		}
	}
}