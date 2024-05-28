#include <iostream>
#include <string>
#include"24RhoHeader.h"

void Rhombus::print_sides_dim() 
{
	std::cout << "Стороны: a = " << aRS << " b = " << bRS << " c = " << cRS << " d = " << dRS << std::endl;
}

void Rhombus::print_engels_dim() 
{
	std::cout << "Углы: А = " << ARS << " В = " << BRS << " С = " << CRS << " D = " << DRS << std::endl;
}