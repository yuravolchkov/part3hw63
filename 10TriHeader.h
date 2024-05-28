#pragma once
#include <iostream>
#include <string>
#include"00FigHeader.h"

class Triangele : public Figuries
{
public:
	// a,b,c - стороны/ A,B,C - углы
	int aT, bT, cT, AT, BT, CT;
	Triangele(int sides_count_T = 3, std::string Figura_Name_T = "Треугольник") : Figuries(sides_count_T, Figura_Name_T), aT(10), bT(20), cT(30), AT(50), BT(60), CT(70) {};
	int get_CT();
	void print_sides_dim() override;
	void print_engels_dim() override;
	
};