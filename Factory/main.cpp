#include "Product.h"
#include "Factory.h"
#include <iostream>
using namespace std;

int main()
{
	Product* pProduct = NULL;
	pProduct = Factory::Create(Factory::PRODUCTA);
	pProduct->Operation();

	pProduct = Factory::Create(Factory::PRODUCTB);
	pProduct->Operation();

	pProduct = Factory::Create(Factory::PRODUCTC);
	pProduct->Operation();		

	return 0;
}