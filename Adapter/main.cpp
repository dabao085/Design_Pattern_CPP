#include "Adapter.h"
#include <iostream>
using namespace std;

int main()
{
	Target* pTarget = new Adapter;
	pTarget->Request();

	Adaptee *pAdaptee = new Adaptee();
	Target *pTarget1 = new Adapter1(pAdaptee);
	pTarget1->Request();

	Target *pTarget2 = new Adapter1();
	pTarget2->Request();

	return 0;
}