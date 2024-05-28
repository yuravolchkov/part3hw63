#include <iostream>
#include <string>
#include"23ParHeader.h"

void Parallelogram::print_sides_dim() 
{
	std::cout << "Стороны: a = " << aP << " b = " << bP << " c = " << cP << " d = " << dP << std::endl;
}

void Parallelogram::print_engels_dim()
{
	std::cout << "Углы: А = " << AP << " В = " << BP << " С = " << CP << " D = " << DP << std::endl;
}