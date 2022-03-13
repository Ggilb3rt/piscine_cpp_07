#include <iostream>
#include "iter.hpp"

class Main
{
public:
	Main(std::string name);
	~Main();
	std::string	myName;
};
Main::Main(std::string name) : myName(name) {}
Main::~Main() {}

std::ostream & operator<<( std::ostream & o, Main const & i) {
	o << i.myName;
	return o;
}




template< typename T>
void	print(T obj) {
	std::cout << obj << std::endl;
}

int main() {
	int			arrInt[] = {87, 123, 9};
	float		arrF[] = {23.13, 34, 12.87, 355.4};
	std::string	arrS[] = {"welcome", "to", "the", "internet", "!!!"};
	char		arrC[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
	Main		arrMain[] = {Main("Roger"), Main("Rabbit")};

	iter(arrInt, 3, print);
	std::cout << std::endl;
	iter(arrF, 4, print);
	std::cout << std::endl;
	iter(arrS, 5, print);
	std::cout << std::endl;
	iter(arrC, 7, print);
	std::cout << std::endl;
	iter(arrMain, 2, print);
	return 0;
}