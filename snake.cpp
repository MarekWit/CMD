#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
using namespace std;
bool gameover;
bool shutDown;
int x, y, fruity, fruitx, score;
int tailx[400], taily[400], ntail;
enum eDirection { STOP, LEFT, RIGHT, UP, DOWN };
eDirection dir;
const int width = 30;
const int height = 30;

void menu()
{
	system("cls");
	cout << "HELLO IN SNAKE GAME" "\n";
	cout << "PRESS S to start the game ""\n";
	cout << "PRESS I for instruction ""\n";
	cout << "PRESS Q for quit""\n";
}
void Instr()
{
	system("cls");
	cout << "Press w to go up""\n";
	cout << "Press s to go down""\n";
	cout << "Press d to go right""\n";
	cout << "Press a to go left""\n";
	cout << "Press m to go menu";
	string input;
	cin >> input;
	if (input == "m")
		menu();

}
void fruitspawn()
{
	fruitx = rand() % width;
	fruity = rand() % height;
}
void setup()
{
	gameover = false;
	shutDown = false;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	fruitspawn();
	score = 0;
	ntail = 0;
}
void draw()
{
	system("cls");
	for (int i = 0; i < width; i++)
		cout << "#";
	cout << endl;
	for (int i = 0; i < height; i++)
	{
		for (int j = 1; j < width; j++)
		{
			if (j == 0)
				cout << "#";
			if (i == y && j == x)
				cout << "0";
			else if (i == fruity && j == fruitx)
				cout << "F";
			else {
				bool print = false;
				for (int k = 0; k < ntail; k++) {
					if (tailx[k] == j && taily[k] == i) {
						cout << "o";
						print = true;
					}
				}
				if (!print)
					cout << " ";
			}
			if (j == width - 1)
				cout << "#";
		}
		cout << endl;
	}
	for (int i = 0; i < width; i++)
	{
		cout << "#";
	}
	cout << endl;
	cout << "Score: " << score << endl;
}
void Input()
{
	if (_kbhit()) {
		switch (_getch())
		{
		case 'a':
			dir = LEFT;
			break;
		case 'w':
			dir = UP;
			break;
		case 'd':
			dir = RIGHT;
			break;
		case 's':
			dir = DOWN;
			break;
		case 'x':
			gameover = true;
			break;
		}
	}
}
void logic()
{
	int prevX = tailx[0];
	int prevY = taily[0];
	int prev2X, prev2Y;
	tailx[0] = x;
	taily[0] = y;
	for (int i = 1; i < ntail; i++)
	{
		prev2X = tailx[i];
		prev2Y = taily[i];
		tailx[i] = prevX;
		taily[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}
	switch (dir)
	{
	case LEFT:
		x--;
		break;
	case RIGHT:
		x++;
		break;
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;
	}
	if (x > width || x<0 || y> height || y < 0)
	{
		gameover = true;
		menu();
	}
	for (int i = 0; i < ntail; i++)
	{
		if (tailx[i] == x && taily[i] == y)
			gameover = true;
	}
	if (x == fruitx && y == fruity)
	{
		score++;
		ntail++;
		fruitspawn();
	}

}
int main()
{
	do {
		menu();
		string input;
		cin >> input;
		if (input == "s")
		{
			setup();
			while (!gameover)
			{
				draw();
				Input();
				logic();
				Sleep(100);

			}
		}
		else if (input == "i")
			Instr();
		else if (input == "q")
			shutDown = true;
	} while (shutDown == false);
}
