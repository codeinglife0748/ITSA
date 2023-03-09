#include<iostream>
using namespace std;
int main() {
	int inh, inm, outh, outm;
	cin >> inh >> inm;
	cin >> outh >> outm;

	int ttime = ((outh * 60) + outm) - ((inh * 60) + inm);

	if (ttime <=120 && ttime > 0)
	{
		cout << ttime / 30 * 30 << endl;
	}
	else if (ttime > 120 && ttime < 240 )
	{
		cout << (ttime-120) / 30 * 40 + 120<<endl;
	}
	else
	{
		cout << (ttime - 240) / 30 * 60 + 280 << endl;;
	}
}