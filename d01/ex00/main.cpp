#include "Pony.hpp"

void	ponyOnTheHeap() {
	Pony *pony = new Pony("Heap", "Red");
	
	pony->show();
	delete pony;
}

void	ponyOnTheStack() {
	Pony pony("Stack", "Green");

	pony.show();
}

int	main()
{
	ponyOnTheStack();
	ponyOnTheHeap();
}