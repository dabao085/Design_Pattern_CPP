#include "Product.h"
#include <iostream>

Product::Product()
{

}

Product::~Product()
{
	
}

ProductA::ProductA()
{

}

ProductA::~ProductA()
{

}

void ProductA::Operation()
{
	std::cout << "ProductA::Operation" << std::endl;
}

ProductB::ProductB()
{

}

ProductB::~ProductB()
{

}

void ProductB::Operation()
{
	std::cout << "ProductB::Operation" << std::endl;
}

ProductC::ProductC()
{

}

ProductC::~ProductC()
{

}

void ProductC::Operation()
{
	std::cout << "ProductC::Operation" << std::endl;
}