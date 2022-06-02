#include<iostream>
#include"Draw_2.h"

int width2 = 168;// для надписи PONG
int  height2 = 43;
int start;

//подсказка длч начала игры
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
				std::cout << "Для начала игры нажмите 1:";
				std::cin >> start;

			}
			else
				std::cout << " ";

		}

	}
}
