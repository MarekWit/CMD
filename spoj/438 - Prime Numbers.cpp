#include <iostream>
#include <cstdlib>

using namespace std;
int n[99999];
bool sprawdz(int n)
{
	if (n < 2)
	{
		return false;
	}
	else
	{
		for (int i = 2; i * i <= n; i++)
			if (n % i == 0)
				return false;
		return true;
	}
}
int main()

{
	int i;
	cin >> i;
	for (int k = 0; k < i; k++) {

		cin >> n[k];
		if (sprawdz(n[k]))

			cout << "TAK" << endl;
		else
			cout << "NIE" << endl;
	}
	return 0;
}
