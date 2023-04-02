#include <iostream>

int	main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "Address of brain:\t\t" << &brain << std::endl;
	std::cout << "Address of pointer to brain:\t" << stringPTR << std::endl;
	std::cout << "Address of reference to brain:\t" << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Value of brain:\t\t\t" << brain << std::endl;
	std::cout << "Value of pointer to brain:\t" << *stringPTR << std::endl;
	std::cout << "Value of reference to brain:\t" << stringREF << std::endl;
	return (0);
}