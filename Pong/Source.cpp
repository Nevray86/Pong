#include<iostream>
#include<conio.h>

using namespace std;

bool gameOver;
const int width = 168; // ������ ����
const int height = 43; // ������ ����
int x, y,x2,y2; // ���������� 
char key;        // ���� � ����������
int pl1 ; // �������
int pl2 ; // �������
int bal_x = width / 2; //����������� ����
int bal_y = height / 2; // ���������� ����
bool up_flag;
bool left_flag,ridh_flad = true;
int p1 = 0;
int p2 = 0;

void setUp() {
	gameOver = false;
	
	x = 3;            //  ��������� ������ �������
	y = height / 2;   //
	y2 = height / 2 + 1;// ��������� ����� �������
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
	if (left_flag) {
		bal_x--;
		bal_y;
	}
	else if (ridh_flad) {
		bal_x++;
		bal_y;
	}

	
	 if (bal_x == 0) {
		p2++;
		left_flag = false;
		ridh_flad = true;
	}
	
	
	 else if (bal_x == 166) {
		 p1++;
		 left_flag = true;
		 ridh_flad = false;
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
