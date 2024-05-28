#include <iostream>
#include <string>
#include"21RecHeader.h"

	void Rectangle::print_sides_dim()
	{
		std::cout << "Стороны: a = " << aR << " b = " << bR << " c = " << cR << " d = " << dR << std::endl;
	}

	void Rectangle::print_engels_dim()
	{
		std::cout << "Углы: А = " << AR << " В = " << BR << " С = " << CR << " D = " << DR << std::endl;
	}