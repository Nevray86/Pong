#include<iostream>
#include"Draw_3.h"
int width1 = 168; //??? ??????? END
int  height1 = 43;
//??????? END
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

	}
}