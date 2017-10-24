#include "strategy.h"
#include <iostream>

CStrategy::CStrategy()
{

}

CStrategy::~CStrategy()
{

}

ConcreteStrategyA::ConcreteStrategyA()
{

}

ConcreteStrategyA::~ConcreteStrategyA()
{

}

void ConcreteStrategyA::AlgorithmFunc()
{
	std::cout << "ConcreteStrategyA::AlgorithmFunc" << std::endl;
}

ConcreteStrategyB::ConcreteStrategyB()
{

}

ConcreteStrategyB::~ConcreteStrategyB()
{

}

void ConcreteStrategyB::AlgorithmFunc()
{
	std::cout << "ConcreteStrategyB::AlgorithmFunc" << std::endl;
}

void CContext::DoSomething()
{
	_pStrategy->AlgorithmFunc();
}