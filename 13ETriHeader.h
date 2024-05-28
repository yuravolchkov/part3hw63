#pragma once
#include <iostream>
#include <string>
#include"10TriHeader.h"
#include"00FigHeader.h"

class Equilateral_Triangele : public Triangele
{
public:
	int aET, bET, cET, AET, BET, CET;
	Equilateral_Triangele(int sides_count_ET = 3, std::string Figura_Name_ET = "Равносторонний треугольник") : Triangele(sides_count_ET, Figura_Name_ET), aET(10), AET(60), bET(10), cET(10), BET(60), CET(60) {};
	void print_sides_dim() override;
	void print_engels_dim() override;
};