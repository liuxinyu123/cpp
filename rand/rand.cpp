#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(static_cast<unsigned int>(time(NULL)));
	std::cout << "0-" << RAND_MAX << ":" << "\n";
	for(int i = 0 ;i < 10; ++i)
		std::cout << rand() << " ";
	std::cout << std::endl;

	std::cout << "0-1" << ":" << "\n";
	for(int i = 0 ;i < 10; ++i)
		std::cout << static_cast<double>(rand()) / RAND_MAX << " ";
	std::cout << std::endl;
	
	std::cout << " 0-100" << ":" << "\n";
	for(int i = 0 ;i < 10; ++i)
		std::cout << rand() % 100 + 1 << " ";
	std::cout << std::endl;
	
	
	return 0;
}
