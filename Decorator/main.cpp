#include "decorator.h"
#include <iostream>
using namespace std;

int main()
{
	Component* pComp = new ConcreteComponent();
	Decorator* pDec = NULL;

	pDec = new ConcreteDecoratorA(pComp);
	pDec = new ConcreteDecoratorB(pDec);

	pDec->Operation();

	return 0;
}