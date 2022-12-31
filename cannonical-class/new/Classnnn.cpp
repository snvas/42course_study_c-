#include <iostream>
#include "nnn.hpp"

nnn::nnn(void)
{
	std::cout << "Constructor" << std::endl;
}

nnn::~nnn(void)
{
	std::cout << "Destructor" << std:endl;
}

nnn::nnn(const nnn &other)
{
	nnn::operator = (other);
}

nnn &nnn::operator = (const nnn &other)
{
	if (this != &other)
	{
		this->XXX = other.XXX();
	}
	return (*this);
}