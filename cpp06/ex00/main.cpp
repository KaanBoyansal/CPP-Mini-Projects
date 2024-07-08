#include "converter.hpp"

int main(int ac, char **args)
{
	if (ac == 2)
	{
		ScalarConverter::convert(args[1]);
	}
	else
		ScalarConverter::impossible();
    return 0;
}
