#pragma once
#include <iostream>
#include <string>
#include"20QuaHeader.h"
#include"00FigHeader.h"

class Rectangle : public Quadrangle
{
public:
	int aR, bR, cR, dR, AR, BR, CR, DR;
	Rectangle(int sides_count_R = 4, std::string Figura_Name_R = "Прямоугольник") : Quadrangle(sides_count_R, Figura_Name_R), aR(10), bR(20), AR(90), cR(10), dR(10), BR(90), CR(90), DR(90) {};
	void print_sides_dim() override;
	void print_engels_dim() override;
};