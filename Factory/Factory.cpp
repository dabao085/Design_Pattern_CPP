#include "Factory.h"
#include "Product.h"
#include <iostream>

Factory::Factory()
{

}

Factory::~Factory()
{

}

Product* Factory::Create(int type)
{
	switch(type)
	{
		case PRODUCTA:
			return new ProductA();
			break;
		case PRODUCTB:
			return new ProductB();
			break;
		case PRODUCTC:
			return new ProductC();
			break;
		default:
			break;
	}
}