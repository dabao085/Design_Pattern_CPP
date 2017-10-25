#include "Product.h"
#include <iostream>

ProductA::ProductA()
{

}

ProductA::~ProductA()
{

}

void ProductA::Operation()
{

}

ConcreteProductA1::ConcreteProductA1()
{

}

ConcreteProductA1::~ConcreteProductA1()
{

}

void ConcreteProductA1::Operation()
{
	std::cout << "ConcreteProductA1::Operation" << std::endl;
}

ProductB::ProductB()
{

}

ProductB::~ProductB()
{

}

void ProductB::Operation()
{

}

ConcreteProductB1::ConcreteProductB1()
{

}

ConcreteProductB1::~ConcreteProductB1()
{

}

void ConcreteProductB1::Operation()
{
	std::cout << "ConcreteProductB1::Operation" << std::endl;
}

ConcreteProductB2::ConcreteProductB2()
{

}

ConcreteProductB2::~ConcreteProductB2()
{

}

void ConcreteProductB2::Operation()
{
	std::cout << "ConcreteProductB2::Operation" << std::endl;
}