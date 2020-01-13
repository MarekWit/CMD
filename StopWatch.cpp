#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <windows.h>

using namespace std;

int hours;
int minutes;
int seconds;

void draw()
{
	system("cls");
	cout << "\n";
	cout << setfill(' ') << setw(55) << "         TIMER         \n";
	cout << setfill(' ') << setw(56) << "----------------------------\n";
	cout << setfill(' ') << setw(29);
	cout << "| " << setfill('0') << setw(2) << hours << " hrs | ";
	cout << setfill('0') << setw(2) << minutes << " min | ";
	cout << setfill('0') << setw(2) << seconds << " sec | \n";
	cout << setfill(' ') << setw(56) << "----------------------------\n";
	cout << setfill(' ') << setw(58) << "          Break ctrl + c         \n";
}
void timer()
{
	while (true)
	{
		draw();
		Sleep(1000);
		seconds++;
		if (seconds == 60)
		{
			minutes++;

			if (minutes == 60)
			{
				hours++;
				minutes = 0;
			}
			seconds = 0;
		}
		
	}
}
int main()
{
	timer();
	return 0;
}
