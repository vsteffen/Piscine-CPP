#include <iostream>
#include "Pony.hpp"

void	ponyOnTheHeap(void) {
	Pony	*ponyHeap = new Pony();

	std::cout << "Pony comes from Heap!" << std::endl;
	ponyHeap->nature = "heap";

	delete(ponyHeap);
	return ;
}

void	ponyOnTheStack(void) {
	Pony 	ponyStack;

	std::cout << "Pony comes from stack!" << std::endl;
	ponyStack.nature = "stack";

	return ;
}

int		main(void) {
	ponyOnTheHeap();
	std::cout << "+-+-+-+-+-+-+-+-+-+-+-+" << std::endl;
	ponyOnTheStack();
	return 0;
}
