#include <iostream>

using namespace std;

int main ()
{
	float kdems, fstdms, multiplier = 33.3;

	cout << "Write the Kdenlive millesecond:" << endl;
	cin >> kdems;
	if (kdems < 30)
	{
		fstdms = kdems * multiplier;
		int istdms = static_cast<int>(fstdms); //convert float to int

		cout << "The result is " << istdms << "." << endl;
	}
	else
	{
		cout << "Error: Kdenlive millesecond is <= 30" << endl;
	}

	return 0;
}
