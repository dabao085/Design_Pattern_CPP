#include "Product.h"
#include "Factory.h"
#include <iostream>
using namespace std;

int main()
{
	Factory *f1 = new ConcreteFactoryA();
	Factory *f2 = new ConcreteFactoryB();

	Product *fp1 = f1->createProductA();
	Product *fp2 = f1->createProductB();

	fp1->Operation();
	fp2->Operation();
	cout << endl;

	Product *fp3 = f2->createProductA();
	Product *fp4 = f2->createProductB();
	fp3->Operation();
	fp4->Operation();
	
	return 0;
}