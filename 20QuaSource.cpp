#include <iostream>
#include <string>
#include"20QuaHeader.h"

void Quadrangle::print_sides_dim()
{
	std::cout << "�������: a = " << aQ << " b = " << bQ << " c = " << cQ << " d = " << dQ << std::endl;
}

void Quadrangle::print_engels_dim()
{
	std::cout << "����: � = " << AQ << " � = " << BQ << " � = " << CQ << " D = " << DQ << std::endl;
}