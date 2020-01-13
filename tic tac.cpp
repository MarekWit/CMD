#include <iostream>

using namespace std;

char  pole[10] = {'o','1','2','3','4','5','6','7','8','9'};


void draw()
{
	system("cls");
	cout << "\t  " << "|" << "  " << " |" << " \n";
	cout << "\t" << pole[1] << " | " << pole[2] << " | " << pole[3] << endl;
	cout << "\t"<<"__|_" << "__|___\n";
	cout << "\t" << pole[4] << " | " << pole[5] << " | " << pole[6] << endl;
	cout << "\t__|_" << "__|___\n";
	cout << "\t" << pole[7] << " | " << pole[8] << " | " << pole[9] << endl;
	cout << "\t  " << "|" << "  " << " |" << " " << endl<<endl;


}
int wygrana()
{
	if (pole[1] == pole[2] && pole[2] == pole[3])
		return 1;
	else if (pole[4] == pole[5] && pole[5] == pole[6])
		return 1;
	else if (pole[7] == pole[8] && pole[8] == pole[9])
		return 1;
	else if (pole[1] == pole[4] && pole[4] == pole[7])
		return 1;
	else if (pole[2] == pole[5] && pole[5] == pole[8])
		return 1;
	else if (pole[3] == pole[6] && pole[6] == pole[9])
		return 1;
	else if (pole[1] == pole[5] && pole[5] == pole[9])
		return 1;
	else if (pole[3] == pole[5] && pole[5] == pole[7])
		return 1;
	else if (pole[1] != '1' && pole[2] != '2' && pole[3] != '3' && pole[4] != '4'
		&& pole[5] != '5' && pole[6] != '6' && pole[7] != '7' && pole[8] != '8' && pole[9] != '9')
		return 0;
	else return -1;
}
int main()
{
	int player = 1,wybor, i;;
	char mark;

	do {
		draw();
		player = (player % 2) ? 1 : 2;

		cout <<"Gracz "<< player << " wybierz pole ";
		cin >> wybor;

		mark = (player == 1) ? 'X' : 'O';

		if (wybor == 1 && pole[1] == '1')
			pole[1] = mark;
		else if (wybor == 1 && pole[1] == '1')
			pole[1] = mark;
		else if (wybor == 2 && pole[2] == '2')
			pole[2] = mark;
		else if (wybor == 3 && pole[3] == '3')
			pole[3] = mark;
		else if (wybor == 4 && pole[4] == '4')
			pole[4] = mark;
		else if (wybor == 5 && pole[5] == '5')
			pole[5] = mark;
		else if (wybor == 6 && pole[6] == '6')
			pole[6] = mark;
		else if (wybor == 7 && pole[7] == '7')
			pole[7] = mark;
		else if (wybor == 8 && pole[8] == '8')
			pole[8] = mark;
		else if (wybor == 9 && pole[9] == '9')
			pole[9] = mark;
		else
		{
			cout << "Niepoprawny ruch!";
			player--;
			cin.ignore();
			cin.get();
		}
		i = wygrana();
		player++;
	} while (i == -1);
	draw();
	if (i == 1)
		cout << "\aGracz " << --player << " wygral";
	else
		cout << "\aRemis!!";
	cin.ignore();
	cin.get();
	return 0;
}

