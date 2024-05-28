#pragma once
#include <iostream>
#include <string>
#include"20QuaHeader.h"
#include"00FigHeader.h"

class Rhombus : public Quadrangle
{
public:
	int aRS, bRS, cRS, dRS, ARS, BRS, CRS, DRS;
	Rhombus(int sides_count_RS = 4, std::string Figura_Name_RS = "ֿאנאככוכמדנאלל") : Quadrangle(sides_count_RS, Figura_Name_RS), aRS(20), bRS(20), cRS(20), dRS(20), ARS(30), BRS(40), CRS(30), DRS(40) {};
	void print_sides_dim() override;
	void print_engels_dim() override;
};