#pragma once
#include <iostream>
#include <string>
#include"00FigHeader.h"

class Quadrangle : public Figuries
{
public:
	int aQ, bQ, cQ, dQ, AQ, BQ, CQ, DQ;
	Quadrangle(int sides_count_Q = 4, std::string Figura_Name_Q = "Четырёхугольник") : Figuries(sides_count_Q, Figura_Name_Q), aQ(10), bQ(20), cQ(30), dQ(40), AQ(50), BQ(60), CQ(70), DQ(80) {};
	void print_sides_dim() override;
	void print_engels_dim() override;
};