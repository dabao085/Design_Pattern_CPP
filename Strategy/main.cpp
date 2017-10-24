#include "strategy.h"
#include <iostream>
using namespace std;

int main()
{
	CStrategy *pStrategy1 = new ConcreteStrategyA();
	CStrategy *pStrategy2 = new ConcreteStrategyB();
	CContext context1(pStrategy1);
	CContext context2(pStrategy2);

	cout << "context1.DoSomething()" << endl;
	context1.DoSomething();

	cout << "context2.DoSomething()" << endl;
	context2.DoSomething();

	cout << "**********************" << endl;
	context2.setStrategy(pStrategy1);
	cout << "context2.DoSomething()" << endl;
	context2.DoSomething();	

	return 0;
}