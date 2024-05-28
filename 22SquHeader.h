#pragma once
#include <iostream>
#include <string>
#include"20QuaHeader.h"
#include"00FigHeader.h"

class Square : public Quadrangle
{
public:
	int aS, bS, cS, dS, AS, BS, CS, DS;
	Square(int sides_count_S = 4, std::string Figura_Name_S = " вадрат") : Quadrangle(sides_count_S, Figura_Name_S), aS(20), AS(90), bS(20), BS(90), cS(20), CS(90), dS(20), DS(90) {};
	void print_sides_dim() override;
	void print_engels_dim() override;
};