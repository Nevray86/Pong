#include<iostream>
#include<conio.h>
#include<Windows.h>
int width1 = 168; //��� ������� END
int  height1 = 43;

int width2 = 168;// ��� ������� PONG
int  height2 = 43;


int start;

bool gameOver;

const int width = 70; //168; // ������ ����
const int height = 18;// 43; // ������ ����


bool ridh_up, ridh_down = true; // ����������� ����
bool left_up, left_down;
// ����������� ���� 
bool left = true;
bool ridh = true;;

int p1 = 0; // ���� ������� ������
int p2 = 0; // ���� ������� ������

int y = height - 5; // ���������� ������ �������
int x = 4;

int y2 = height - 5;// ��������� ����� �������
int x2 = width - 5;

int  bal_x = width / 2; //����������� ����
int bal_y = height / 2; // ���������� ����
 //������� ���������� ����� ����
//void setUp() {
	//gameOver = true;
	//}
//������� ��������� ����,�������,��������,����
void Draw() {
	setlocale(LC_ALL, "ru");
	system("cls");
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {   // ������� ����
			if (i == 5 || i == height - 1 || j == 0 && i > 5 || j == width - 1 && i > 5)
				std::cout << "#";

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
//��������� ��� ������ ����
void Draw2() {
	setlocale(LC_ALL, "ru");

	for (int i = 0; i < height2; i++) {
		for (int j = 0; j < width2; j++) {
			if (i == 5 && j >= 50 && j <= 59 || i >= 5 && i <= 15 && j == 50 || i > 5 && i < 10 && j == 60 || i == 10 && j >= 50 && j < 60

				|| i == 5 && j > 64 && j < 74 || i > 5 && i < 15 && j == 64 || i > 5 && i < 15 && j == 74 || i == 15 && j > 64 && j < 74

				|| i >= 5 && i <= 15 && j == 78 || i >= 5 && i <= 15 && j == 88 || i == 6 && j == 79 || i == 7 && j == 80 || i == 8 && j == 81
				|| i == 9 && j == 82 || i == 10 && j == 83 || i == 11 && j == 84 || i == 12 && j == 85 || i == 13 && j == 86 || i == 14 && j == 87

				|| i == 5 && j >= 93 && j <= 101 || i > 5 && i < 15 && j == 92 || i >= 13 && i < 15 && j == 102 || i == 15 && j > 92 && j <= 101
				|| i == 13 && j >= 99 && j <= 102 || i == 6 && j == 102)
				std::cout << "#";
			else if (i == height2 / 2 && j == 63) {
				std::cout << "��� ������ ���� ������� 1:";
				std::cin >> start;

			}
			else
				std::cout << " ";

		}

	}
}
//������� END
void Draw3() {

	for (int i = 0; i < height1; i++) {
		for (int j = 0; j < width1; j++) {
			if

				(i == 5 && j > 64 && j < 74 || i == 10 && j > 64 && j < 74 || i >= 5 && i <= 15 && j == 64 || i == 15 && j > 64 && j < 74

					|| i >= 5 && i <= 15 && j == 78 || i >= 5 && i <= 15 && j == 88 || i == 6 && j == 79 || i == 7 && j == 80 || i == 8 && j == 81
					|| i == 9 && j == 82 || i == 10 && j == 83 || i == 11 && j == 84 || i == 12 && j == 85 || i == 13 && j == 86 || i == 14 && j == 87

					|| i >= 5 && i <= 15 && j == 92 || i > 6 && i < 14 && j == 102 || i == 5 && j > 92 && j < 99 || i == 15 && j > 92 && j < 99
					|| i == 6 && j == 100 || i == 14 && j == 100)



				std::cout << "#";


			else
				std::cout << " ";

		}
		//cout << endl;
	}
}



//�������������� ���� � �������	
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
				Draw3();
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
				Draw3();
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
				Draw3();
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
				Draw3();
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
				Draw3();
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
				Draw3();
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
	
	
	while (!gameOver) {
		Draw();
		Logic();
	}
	
	

	



	return 0;
}
