#include "decorator.h"
#include <iostream>

Component::Component()
{

}

Component::~Component()
{

}

ConcreteComponent::ConcreteComponent()
{

}

ConcreteComponent::~ConcreteComponent()
{

}

void ConcreteComponent::Operation()
{
	std::cout << "Original Operation, ConcreteComponent::Operation" << std::endl;
}

Decorator::~Decorator()
{

}

void Decorator::Operation()
{

}

ConcreteDecoratorA::~ConcreteDecoratorA()
{

}

void ConcreteDecoratorA::Operation()
{
	this->_mPComp->Operation();
	this->AddOperation();

}

void ConcreteDecoratorA::AddOperation()
{
	std::cout << "Additional OperationA ConcreteDecoratorA::AddOperation" << std::endl;
}

ConcreteDecoratorB::~ConcreteDecoratorB()
{

}

void ConcreteDecoratorB::Operation()
{
	this->_mPComp->Operation();
	this->AddOperation();

}

void ConcreteDecoratorB::AddOperation()
{
	std::cout << "Additional OperationB ConcreteDecoratorB::AddOperation" << std::endl;
}


