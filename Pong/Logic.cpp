#include<iostream>
#include"Logic.h"
#include<conio.h>
#include"Draw_2.h"

static int width1 = 168; //��� ������� END
static int  height1 = 43;

static int width2 = 168;// ��� ������� PONG
static int  height2 = 43;


static int start;

bool gameOver;

static const int width = 70; //168; // ������ ����
static const int height = 18;// 43; // ������ ����


static bool ridh_up, ridh_down = true; // ����������� ����
static bool left_up, left_down;// ����������� ���� 
static bool left = true;
static bool ridh = true;;

static int p1 = 0; // ���� ������� ������
static int p2 = 0; // ���� ������� ������

static int y = height - 5; // ���������� ������ �������
static int x = 4;

static int y2 = height - 5;// ��������� ����� �������
static int x2 = width - 5;

static int  bal_x = width / 2; //����������� ����
static int bal_y = height / 2; // ���������� ����

void Draw() {

	setlocale(LC_ALL, "ru");
	system("cls");
	char a = 4;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {   // ������� ����


			if (i == 5 || i == height - 1 || j == 0 && i > 5 || j == width - 1 && i > 5)

				std::cout << a;

			else if
				(i == y && j == x || i + 1 == y && j == x || i + 2 == y && j == x || i + 3 == y && j == x || i + 4 == y && j == x)   // ����������� ������� ������� ������ 
				std::cout << '|';

			else if (i == y2 && j == x2 || i + 1 == y2 && j == x2 || i + 2 == y2 && j == x2  // ����������� ������� ������� ������ 
				|| i + 3 == y2 && j == x2 || i + 4 == y2 && j == x2)
				std::cout << "|";

			else if (j == width / 2 && i > 4)  // ����������� ����� � ����
				std::cout << "0";

			else if (i == 1 && j == 1)   //  ���� ������� ������
				std::cout << "����� 1: " << p1;
			/////////////////////////////////////////////////////////////

			/////////////////////////////////////////
			else if (i == 1 && j == width - 20)   // ���� ������� ������
				std::cout << "����� 2: " << p2;

			else if (i == bal_y && j == bal_x)   // ���������� ���� � ����
				std::cout << "o";

			else if (i == 3 && j == 1)   //  
				std::cout << "��� ����� �������:2";
			else if (i == 4 && j == 1)   //  
				std::cout << "��� ���������� ���� ������� 0:";

			else
				std::cout << " ";
		}
		std::cout << std::endl;
	}

}

void Logic() {



	//������ ���� � �������� ���� ���� ����� ����� ������
	if (ridh) {
		bal_x++;
		bal_y;




		if (_kbhit()) {
			switch (_getch()) {

			case '2':          //����� �����
				Draw2();
				break;
			case '0':			//����� ����� ����
				gameOver = true;

				break;
			case 'q':			// ��� ���� ����� ����� ����� ��� ������� �������� ����� ���� �������� ������
			case 'Q':			//
				if (y > 10)		//	
					y--;			//
				break;			//
			case 'a':			//
			case 'A':			//
				if (y < height - 2)	//
					y++;			//
				break;			//
			case 'l':
			case 'L':

				if (bal_x == x2 - 1 && bal_y == y2 || bal_x == x2 - 1 && bal_y == y2 - 1
					|| bal_x == x2 - 1 && bal_y == y2 - 2 || bal_x == x2 - 1 && bal_y == y2 - 3 || bal_x == x2 - 1 && bal_y == y2 - 4) {

					ridh = false;
					left = false;
					ridh_down = false;
					ridh_up = false;
					left_down = true;
					left_up = false;

				}
				if (y2 < height - 2)
					y2++;
				break;

			case 'p':
			case 'P':


				if (bal_x == x2 - 1 && bal_y == y2 || bal_x == x2 - 1 && bal_y == y2 - 1
					|| bal_x == x2 - 1 && bal_y == y2 - 2 || bal_x == x2 - 1 && bal_y == y2 - 3 || bal_x == x2 - 1 && bal_y == y2 - 4) {

					ridh = false;
					left = false;
					ridh_down = false;
					ridh_up = false;
					left_down = false;
					left_up = true;;

				}
				if (y2 > 10)
					y2--;
				break;



			}

		}
		else {

			if (bal_x == x2 - 1 && bal_y == y2 || bal_x == x2 - 1 && bal_y == y2 - 1
				|| bal_x == x2 - 1 && bal_y == y2 - 2 || bal_x == x2 - 1 && bal_y == y2 - 3 || bal_x == x2 - 1 && bal_y == y2 - 4) {

				ridh = false;
				left = true;
				ridh_down = false;
				ridh_up = false;
				left_down = false;
				left_up = false;


			}
		}

	}
	//������������� ���� � ������� ����� ���� ������ ������ ����
		//============================================================


	else if (ridh_down) {
		bal_x++;
		bal_y++;
		if (bal_y == height - 2) {
			ridh_up = true;
			ridh_down = false;
		}
		if (_kbhit()) {
			switch (_getch()) {
			case '2':
				Draw2();
				break;
			case '0':
				gameOver = true;

				break;
			case 'q':
			case 'Q':
				if (y > 10)
					y--;
				break;

			case 'a':
			case 'A':
				if (y < height - 2)
					y++;
				break;
			case 'l':
			case 'L':

				if (bal_x == x2 - 1 && bal_y == y2 || bal_x == x2 - 1 && bal_y == y2 - 1
					|| bal_x == x2 - 1 && bal_y == y2 - 2 || bal_x == x2 - 1 && bal_y == y2 - 3 || bal_x == x2 - 1 && bal_y == y2 - 4) {

					ridh = false;
					left = true;
					ridh_down = false;
					ridh_up = false;
					left_down = false;
					left_up = false;

				}
				if (y2 < height - 2)
					y2++;
				break;

			case 'p':
			case 'P':

				if (bal_x == x2 - 1 && bal_y == y2 || bal_x == x2 - 1 && bal_y == y2 - 1
					|| bal_x == x2 - 1 && bal_y == y2 - 2 || bal_x == x2 - 1 && bal_y == y2 - 3 || bal_x == x2 - 1 && bal_y == y2 - 4) {

					ridh = false;
					left = false;
					ridh_down = false;
					ridh_up = false;
					left_down = false;
					left_up = true;

				}
				if (y2 > 10)
					y2--;
				break;


			}

		}
		else {

			if (bal_x == x2 - 1 && bal_y == y2 || bal_x == x2 - 1 && bal_y == y2 - 1
				|| bal_x == x2 - 1 && bal_y == y2 - 2 || bal_x == x2 - 1 && bal_y == y2 - 3 || bal_x == x2 - 1 && bal_y == y2 - 4) {

				ridh = false;
				left = false;
				ridh_down = false;
				ridh_up = false;
				left_down = true;
				left_up = false;


			}
		}


	}
	//������������� ���� � ������� ����� ���� ������ ������ �����
	//========================================================================================
	else if (ridh_up) {
		bal_x++;
		bal_y--;
		if (bal_y == 6) {
			ridh_up = false;
			ridh_down = true;
		}
		if (_kbhit()) {
			switch (_getch()) {
			case '2':
				Draw2();
				break;
			case '0':
				gameOver = true;

				break;
			case 'q':
			case 'Q':
				if (y > 10)
					y--;
				break;
			case 'a':
			case 'A':
				if (y < height - 2)
					y++;
				break;
			case 'l':
			case 'L':

				if (bal_x == x2 - 1 && bal_y == y2 || bal_x == x2 - 1 && bal_y == y2 - 1
					|| bal_x == x2 - 1 && bal_y == y2 - 2 || bal_x == x2 - 1 && bal_y == y2 - 3 || bal_x == x2 - 1 && bal_y == y2 - 4) {

					ridh = false;
					left = false;
					ridh_down = false;
					ridh_up = false;
					left_down = true;
					left_up = false;

				}
				if (y2 < height - 2)
					y2++;
				break;

			case 'p':
			case 'P':

				if (bal_x == x2 - 1 && bal_y == y2 || bal_x == x2 - 1 && bal_y == y2 - 1
					|| bal_x == x2 - 1 && bal_y == y2 - 2 || bal_x == x2 - 1 && bal_y == y2 - 3 || bal_x == x2 - 1 && bal_y == y2 - 4) {

					ridh = false;
					left = true;
					ridh_down = false;
					ridh_up = false;
					left_down = false;
					left_up = false;
				}
				if (y2 > 10)
					y2--;
				break;


			}

		}
		else {

			if (bal_x == x2 - 1 && bal_y == y2 || bal_x == x2 - 1 && bal_y == y2 - 1
				|| bal_x == x2 - 1 && bal_y == y2 - 2 || bal_x == x2 - 1 && bal_y == y2 - 3 || bal_x == x2 - 1 && bal_y == y2 - 4) {

				ridh = false;
				left = false;
				ridh_down = false;
				ridh_up = false;
				left_down = false;
				left_up = true;


			}
		}


	}
	//������������� ���� � ������� ����� ���� ������ ����� ����
	//=========================================================
	else if (left_down) {
		bal_x--;
		bal_y++;
		if (bal_y == height - 2) {
			left_down = false;
			left_up = true;
		}
		if (_kbhit()) {
			switch (_getch()) {
			case '2':
				Draw2();
				break;
			case '0':
				gameOver = true;

				break;
			case 'p':
			case 'P':
				if (y2 > 10)
					y2--;
				break;
			case 'l':
			case 'L':
				if (y2 < height - 2)
					y2++;
				break;
			case 'q':
			case 'Q':

				if (bal_x == x + 1 && bal_y == y || bal_x == x + 1 && bal_y == y - 1 || bal_x == x + 1 && bal_y == y - 2 || bal_x == x + 1 && bal_y == y - 3
					|| bal_x == x + 1 && bal_y == y - 4) {

					ridh = false;
					left = false;
					ridh_down = false;
					ridh_up = true;
					left_down = false;
					left_up = false;

				}

				if (y > 10)
					y--;
				break;

			case 'a':
			case 'A':

				if (bal_x == x + 1 && bal_y == y || bal_x == x + 1 && bal_y == y - 1 || bal_x == x + 1 && bal_y == y - 2 || bal_x == x + 1 && bal_y == y - 3
					|| bal_x == x + 1 && bal_y == y - 4) {

					ridh = true;
					left = false;
					ridh_down = false;
					ridh_up = false;
					left_down = false;
					left_up = false;

				}
				if (y < height - 2)
					y++;
				break;


			}

		}
		else {

			if (bal_x == x + 1 && bal_y == y || bal_x == x + 1 && bal_y == y - 1 || bal_x == x + 1 && bal_y == y - 2 || bal_x == x + 1 && bal_y == y - 3
				|| bal_x == x + 1 && bal_y == y - 4) {

				ridh = false;
				left = false;
				ridh_down = true;
				ridh_up = false;
				left_down = false;
				left_up = false;


			}
		}


	}//������������� ���� � ������� ����� ���� ������ ����� �����
	//================================================================
	else if (left_up) {
		bal_x--;
		bal_y--;
		if (bal_y == 6) {
			left_up = false;
			left_down = true;
		}
		if (_kbhit()) {
			switch (_getch()) {
			case '2':
				Draw2();
				break;
			case '0':
				gameOver = true;

				break;
			case 'p':
			case 'P':
				if (y2 > 10)
					y2--;
				break;
			case 'l':
			case 'L':
				if (y2 < height - 2)
					y2++;
				break;
			case 'q':
			case 'Q':

				if (bal_x == x + 1 && bal_y == y || bal_x == x + 1 && bal_y == y - 1 || bal_x == x + 1 && bal_y == y - 2 || bal_x == x + 1 && bal_y == y - 3
					|| bal_x == x + 1 && bal_y == y - 4) {

					ridh = true;
					left = false;
					ridh_down = false;
					ridh_up = false;
					left_down = false;
					left_up = false;

				}

				if (y > 10)
					y--;
				break;

			case 'a':
			case 'A':

				if (bal_x == x + 1 && bal_y == y || bal_x == x + 1 && bal_y == y - 1 || bal_x == x + 1 && bal_y == y - 2 || bal_x == x + 1 && bal_y == y - 3
					|| bal_x == x + 1 && bal_y == y - 4) {

					ridh = false;
					left = false;
					ridh_down = true;
					ridh_up = false;
					left_down = false;
					left_up = false;

				}
				if (y < height - 2)
					y++;
				break;


			}

		}
		else {

			if (bal_x == x + 1 && bal_y == y || bal_x == x + 1 && bal_y == y - 1 || bal_x == x + 1 && bal_y == y - 2 || bal_x == x + 1 && bal_y == y - 3
				|| bal_x == x + 1 && bal_y == y - 4) {

				ridh = false;
				left = false;
				ridh_down = false;
				ridh_up = true;
				left_down = false;
				left_up = false;


			}
		}


	}
	// �������������� ���� � �������� ����� ��� �������� ����� �����
//======================================================================
	else if (left) {
		bal_x--;
		bal_y;
		if (_kbhit()) {
			switch (_getch()) {
			case '2': //����� �����
				Draw2(); // ���������� �����
				break;
			case '0': // ����� ����� ���� 
				gameOver = true;

				break;
			case 'p':
			case 'P':
				if (y2 > 10)
					y2--;
				break;
			case 'l':
			case 'L':
				if (y2 < height - 2)
					y2++;
				break;
			case 'q':
			case 'Q':

				if (bal_x == x + 1 && bal_y == y || bal_x == x + 1 && bal_y == y - 1 || bal_x == x + 1 && bal_y == y - 2 || bal_x == x + 1 && bal_y == y - 3
					|| bal_x == x + 1 && bal_y == y - 4) {
					ridh = false;
					left = false;
					ridh_down = false;
					ridh_up = true;
					left_down = false;
					left_up = fabsl;

				}
				if (y > 10)
					y--;
				break;

			case 'a':
			case 'A':

				if (bal_x == x + 1 && bal_y == y || bal_x == x + 1 && bal_y == y - 1 || bal_x == x + 1 && bal_y == y - 2 || bal_x == x + 1 && bal_y == y - 3
					|| bal_x == x + 1 && bal_y == y - 4) {

					ridh = false;
					left = false;
					ridh_down = true;
					ridh_up = false;
					left_down = false;
					left_up = false;

				}
				if (y < height - 2)
					y++;
				break;
			}

		}
		else {

			if (bal_x == x + 1 && bal_y == y || bal_x == x + 1 && bal_y == y - 1 || bal_x == x + 1 && bal_y == y - 2
				|| bal_x == x + 1 && bal_y == y - 3
				|| bal_x == x + 1 && bal_y == y - 4) {

				ridh = true;
				left = false;
				ridh_down = false;
				ridh_up = false;
				left_down = false;
				left_up = false;
			}
		}
	}
	// ���������� �����
	if (bal_x == 0) {
		p2++;
		if (p2 == 5) {
			gameOver = true;
		}
		bal_x = width / 2;
		bal_y = height / 2;
	}
	else if (bal_x == width) {
		p1++;
		if (p1 == 5) {

			gameOver = true;
		}
		bal_x = width / 2;
		bal_y = height / 2;
	}
}