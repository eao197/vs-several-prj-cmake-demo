#include <iostream>

#include <hello.hpp>

int main()
{
	if (const auto r = core::calculate(3, 4); r != 7)
	{
		std::cerr << "unexpected result of calculate(3,4): " << r << std::endl;
		return 2;
	}

	return 0;
}
