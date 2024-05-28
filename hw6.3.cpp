#include <iostream>
#include <string>
#include"24RhoHeader.h"
#include"23ParHeader.h"
#include"22SquHeader.h"
#include"21RecHeader.h"
#include"20QuaHeader.h"
#include"13ETriHeader.h"
#include"12ITriHeader.h"
#include"11RTriHeader.h"
#include"10TriHeader.h"
#include"00FigHeader.h"
#include"00PrintInfo.h"

int main()
{
	setlocale(LC_ALL, "Russian"); // задать русский текст
	std::system("chcp 1251"); // настроить кодировку консоли
	std::system("cls"); // очистить экран

	Figuries* Custom_Figure[9];
	Custom_Figure[0] = new Triangele{};
	Custom_Figure[1] = new Right_Triangele{};
	Custom_Figure[2] = new Isosceles_Triangele{};
	Custom_Figure[3] = new Equilateral_Triangele{};
	Custom_Figure[4] = new Quadrangle{};
	Custom_Figure[5] = new Rectangle{};
	Custom_Figure[6] = new Square{};
	Custom_Figure[7] = new Parallelogram{};
	Custom_Figure[8] = new Rhombus{};

	for (int i = 0; i < 9; i++)
	{
		print_info(Custom_Figure[i]);
	}

	for (int i = 0; i < 9; i++)
	{
		delete Custom_Figure[i];
	}
	return 52;
}