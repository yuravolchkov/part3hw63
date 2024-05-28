#pragma once
#include <iostream>
#include <string>
#include"10TriHeader.h"
#include"00FigHeader.h"

class Isosceles_Triangele : public Triangele
{
public:
	int aIT, cIT;
	Isosceles_Triangele(int sides_count_IT = 3, std::string Figura_Name_IT = "Равнобедренный треугольник") : Triangele(sides_count_IT, Figura_Name_IT), aIT(10), cIT(10) {};
	void print_sides_dim() override;
	void print_engels_dim() override;
};