#include <iostream>

using namespace std;

int main()
{

	int t, l, n[100], liczb, p, np;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		l = 0;
		cin >> liczb;
		for (int k = 1; k <= liczb; k++)
		{
			cin >> n[k];

		}
		for (int k = 1; k <= liczb; k++)
		{
			if (k % 2 == 0)
				cout << n[k] << " ";
		}
		for (int k = 1; k <= liczb; k++)
		{
			if (k % 2 != 0)
				cout << n[k] << " ";
		}
		cout << endl;
	}
	return 0;
}
