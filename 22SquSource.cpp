#include <iostream>
#include <string>
#include"22SquHeader.h"

void Square::print_sides_dim()
{
	std::cout << "Стороны: a = " << aS << " b = " << bS << " c = " << cS << " d = " << dS << std::endl;
}

void Square::print_engels_dim()
{
	std::cout << "Углы: А = " << AS << " В = " << BS << " С = " << CS << " D = " << DS << std::endl;
}