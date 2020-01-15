#include <iostream>

using namespace std;

int main()
{
	int a[200];
	int suma = 0;
	for (int i = 0; cin >> a[i]; i++)
	{
		suma += a[i];
		cout << suma << endl;
	}
	return 0;
}
