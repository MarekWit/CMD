#include <iostream>
#include <windows.h>
using namespace std;
int seconds = 0;
void draw()
{
    cout << "\t\t----------------\n";
    cout << "\t\t    " << seconds << " seconds\n";
}
void alarm()
{
    cout << "Set up Alarm clock in seconds: ";
    cin >> seconds;
    while (true)
    {
        system("cls");
        draw();
        Sleep(1000);
        seconds--;

        if (seconds == -1)
        {
            cout << "\a\a\a\a\a\a";
            cout << "Set up again?? (y/n)";

            char choose;
            cin >> choose;
            if (!(choose != 'y' && choose != 'Y'))
            {
                system("cls");
                alarm();
            }
            else
                exit(0);
        }
    }
}
int main()
{
    alarm();
    std::cout << "Hello World!\n";
}

