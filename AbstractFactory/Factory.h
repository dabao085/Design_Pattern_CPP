#ifndef __FACTORY_H__
#define __FACTORY_H__
#include "Product.h"

class ProductA;
class ProductB;
class Factory
{
public:
	Factory();
	virtual ~Factory();
	virtual ProductA *createProductA() = 0;
	virtual ProductB *createProductB() = 0;
};

class ConcreteFactoryA:public Factory
{
public:
	ConcreteFactoryA();
	~ConcreteFactoryA();
	virtual ProductA *createProductA();
	virtual ProductB *createProductB();
};

class ConcreteFactoryB:public Factory
{
public:
	ConcreteFactoryB();
	~ConcreteFactoryB();
	virtual ProductA *createProductA();
	virtual ProductB *createProductB();
};

#endif