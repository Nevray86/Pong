#include<iostream>
#include<Windows.h>
#include"Logic.h"
#include"Draw.h"
#include"Draw_3.h"
#include"Draw_2.h"


int main() {
	extern int start;
	extern bool gameOver;

	Draw2();

	if (start == 1) {
		while (!gameOver) {
			Draw();
			Logic();
			Sleep(50);

		}

		Draw3();

	}
	return 0;
}

