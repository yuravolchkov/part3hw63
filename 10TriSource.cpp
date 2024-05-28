#include <iostream>
#include <string>
#include"10TriHeader.h"


	int Triangele::get_CT()
	{
		return CT;
	}

	void Triangele::print_sides_dim() 
	{
		std::cout << "Стороны: a = " << aT << " b = " << bT << " c = " << cT << std::endl;
	}

	void Triangele::print_engels_dim() 
	{
		std::cout << "Углы: А = " << AT << " В = " << BT << " С = " << CT << std::endl;
	}