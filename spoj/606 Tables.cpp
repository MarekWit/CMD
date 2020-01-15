#include <iostream>
using namespace std;
int main()
{
	int b = 0, test, tablica[100], a;
	cin >> test;
	while (b < test)
	{
		cin >> a;
		for (int k = 0; k < a; k++)
		{
			cin >> tablica[k];
		}

		for (int t = a - 1; t >= 0; t--)
		{
			cout << tablica[t] << "  ";
		}
		b++;
	}
	return 0;
}

