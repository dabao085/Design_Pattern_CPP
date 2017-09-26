#include "Abstraction.h"
#include "AbstractionImplement.h"
#include <iostream>

Abstraction::Abstraction()
{

}

Abstraction::~Abstraction()
{

}

RefinedAbstractionA::RefinedAbstractionA(AbstractionImplement* imp)
{
	this->_imp = imp;
}

RefinedAbstractionA::~RefinedAbstractionA()
{
	delete this->_imp;
	this->_imp = NULL;
}

void RefinedAbstractionA::Operation()
{
    std::cout << "RefinedAbstractionA::Operation" << std::endl;  
    this->_imp->Operation();  	
}

RefinedAbstractionB::RefinedAbstractionB(AbstractionImplement* imp)
{
	this->_imp = imp;
}

RefinedAbstractionB::~RefinedAbstractionB()
{
	delete this->_imp;
	this->_imp = NULL;
}

void RefinedAbstractionB::Operation()
{
    std::cout << "RefinedAbstractionB::Operation" << std::endl;  
    this->_imp->Operation();  	
}