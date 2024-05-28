#pragma once
#include <iostream>
#include <string>
#include"20QuaHeader.h"
#include"00FigHeader.h"

class Parallelogram : public Quadrangle
{
public:
	int aP, bP, cP, dP, AP, BP, CP, DP;
	Parallelogram(int sides_count_P = 4, std::string Figura_Name_P = "ֿאנאככוכמדנאלל") : Quadrangle(sides_count_P, Figura_Name_P), aP(20), bP(30), AP(30), BP(40), cP(20), dP(30), CP(30), DP(40) {};
	void print_sides_dim() override;
	void print_engels_dim() override;
};