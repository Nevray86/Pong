#include<iostream>
#include<conio.h>

using namespace std;
bool ridh_up = true, ridh_down = true;
bool left_up = true, left_down = true;
bool gameOver;
const int width = 168; // ширина пол€
const int height = 43; // высота пол€
int x, y,x2,y2; // координаты 
char key;        // ввод с клавиатуры
int pl1 ; // рфкетка
int pl2 ; // ракетка
int bal_x = width / 2; //ккординатаа м€ча
int bal_y = height / 2; // координата м€ча

int p1 = 0;
int p2 = 0;

void setUp() {
	gameOver = false;
	
	x = 3;            //  положение первой ракетки
	y = height / 2;   //
	y2 = height / 2 + 1;// положение втрой ракетки
	x2 = 164;           //

	

}

void Draw() {
	
	system("cls");
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (i == 5 || i == height - 1)
				cout << "#";
			else if
				(i == y && j == x || i + 1 == y && j == x || i + 2 == y && j == x || i + 3 == y && j == x || i + 4 == y && j == x) {
				
				cout << '|';
			}
			else if
				(i == x2 && j == x2 || i + 1 == y2 && j == x2 || i + 2 == y2 && j == x2 || i + 3 == y2 && j == x2 || i + 4 == y2 && j == x2 || i + 5 == y2 && j == x2)
				
				cout << '|';
			
				
			else if (i == 0 && j < 1)
				cout << "pong 1: " << p1;
			else if (i == 0 && j == 150)
				cout << "pong 2: " << p2;
			else if (i == bal_y && j == bal_x)
				cout << "o";

			

			else
				cout << " ";
		}
		cout << endl;
	}

}
void Input() {
	if(_kbhit()) {

		switch (_getch())
		{

		case 'p':
			y2--; break;

		case 'l':
			y2++; break;

		case 'q':
			y--; break;

		case 'a':
			y++; break;
			break;
		}
	}
	
}

void Logic() {
	if (ridh_down) {
		bal_x++* (2);
		bal_y++;
		if (bal_y == height - 1) {
			ridh_down = false;
			ridh_up = true;
		}
	}
	else if (ridh_up) {
		bal_x++;
		bal_y--;
		if (bal_y == 5) {
			ridh_up = false;
			ridh_down = true;
		}
	}
	else if (left_down) {
		bal_x--;
		bal_y++;
		if (bal_y == height - 1) {
			left_down = false;
			left_up = true;
		}
	}
	else if (left_up) {
		bal_x--;
		bal_y--;
		if (bal_y == 5) {
			left_up = false;
			left_down = true;
		}
	}

	if (bal_x == 0) {
		p2++;
		if (p2 == 5) {
			gameOver = true;
		}
		bal_x = width / 2;
		bal_y = height / 2;
		ridh_down = true;
		ridh_up = true;
		left_down = false;
		left_up = false;
	}
	else if (bal_x == width) {
		p1++;
		if (p1 == 5) {
			gameOver = true;
		}

		bal_x = width / 2;
		bal_y = height / 2;
		left_down = true;
		left_up = true;
		ridh_down = false;
		ridh_up = false;
		
	}

	
}
//00000000000000000000000000000000000000000000000000000000000000
int main() {
	
	setUp();
	while (!gameOver) {
		Draw();
		Input();
		Logic();
	}
	
	

	



	return 0;
}
