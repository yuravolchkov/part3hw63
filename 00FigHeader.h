#pragma once
#include <iostream>
#include <string>

class Figuries
{
public:
	int sides_count;
	std::string Figure_Name;
	Figuries() :sides_count(0), Figure_Name("Фигура") {};
	Figuries(int sides_count_FC, std::string Figure_Name_FC) : sides_count(sides_count_FC), Figure_Name(Figure_Name_FC) {};
	int get_sides_count();
	std::string get_figura_name();
	virtual void print_sides_dim();
	virtual void print_engels_dim();
};