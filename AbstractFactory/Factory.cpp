#include "Factory.h"
#include <iostream>

Factory::Factory()
{

}

Factory::~Factory()
{

}

ConcreteFactoryA::ConcreteFactoryA()
{

}

ConcreteFactoryA::~ConcreteFactoryA()
{

}

ProductA *ConcreteFactoryA::createProductA()
{
	return new ConcreteProductA1();
}

ProductB *ConcreteFactoryA::createProductB()
{
	return new ConcreteProductA2();
}

ConcreteFactoryB::ConcreteFactoryB()
{

}

ConcreteFactoryB::~ConcreteFactoryB()
{

}

ProductA *ConcreteFactoryB::createProductA()
{
	return new ConcreteProductA2();
}

ProductB *ConcreteFactoryB::createProductB()
{
	return new ConcreteProductB2();
}

