#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int	num = rand() % 3;
	if (num == 0)
	{
		return reinterpret_cast<Base*>(new A);
	}
	else if (num == 1)
	{
		return reinterpret_cast<Base*>(new B);
	}
	else
	{
		return reinterpret_cast<Base*>(new C);
	}
}

void identify_from_pointer( Base * p )
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference( Base & p )
{
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
}

int	main( void )
{
	srand(clock());

	Base	*base = generate();
	identify_from_pointer(base);
	base = generate();
	identify_from_reference(*base);
}
