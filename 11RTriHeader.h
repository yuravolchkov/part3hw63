#pragma once
#include <iostream>
#include <string>
#include"10TriHeader.h"
#include"00FigHeader.h"

class Right_Triangele : public Triangele
{
public:
	int CRT;
	Right_Triangele(int sides_count_RT = 3, std::string Figura_Name_RT = "Прямоугольный треугольник") : Triangele(sides_count_RT, Figura_Name_RT), CRT(90) {};
	void print_sides_dim() override;
	void print_engels_dim() override;
};
