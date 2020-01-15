#include <iostream>
#include <math.h>

using namespace std;
int a, b;
int wynik;
char znak;

int main()
{
    while (cin >> znak >> a >> b)
    {

        if (znak == '+')
        {
            wynik = a + b;
        }
        else if (znak == '-')
        {
            wynik = a - b;
        }
        else if (znak == '*')
        {
            wynik = a * b;
        }
        else if (znak == '/')
        {
            wynik = a / b;
        }
        else if (znak == '%')
        {
            wynik = a % b;
        }
        cout << wynik << endl;
    }

    return 0;
}

