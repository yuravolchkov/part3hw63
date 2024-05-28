#include <iostream>
#include <string>
#include"24RhoHeader.h"
#include"23ParHeader.h"
#include"22SquHeader.h"
#include"21RecHeader.h"
#include"20QuaHeader.h"
#include"13ETriHeader.h"
#include"12ITriHeader.h"
#include"11RTriHeader.h"
#include"10TriHeader.h"
#include"00FigHeader.h"

void print_info(Figuries* input_figures)
{
	std::cout << input_figures->get_figura_name() << std::endl;
	input_figures->print_sides_dim();
	input_figures->print_engels_dim();
	std::cout << std::endl;
}