#include <iostream>
#include <math.h>

using namespace std;
int test, licz_licz, a[100], wynik;
int tab_wynik[100];
int main()
{
    wynik = 0;
    cin >> test;
    for (int k = 0; k < test; k++)
    {
        cin >> licz_licz;
        for (int i = 0; i < licz_licz; i++)
        {
            cin >> a[i];
            wynik += a[i];
        }
        tab_wynik[k] = wynik;
        wynik = 0;
    }
    for (int k = 0; k < test; k++)
        cout << tab_wynik[k] << endl;
    return 0;
}
