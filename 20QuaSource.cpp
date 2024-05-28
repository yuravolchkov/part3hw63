#include <iostream>
#include <string>
#include"20QuaHeader.h"

void Quadrangle::print_sides_dim()
{
	std::cout << "Стороны: a = " << aQ << " b = " << bQ << " c = " << cQ << " d = " << dQ << std::endl;
}

void Quadrangle::print_engels_dim()
{
	std::cout << "Углы: А = " << AQ << " В = " << BQ << " С = " << CQ << " D = " << DQ << std::endl;
}