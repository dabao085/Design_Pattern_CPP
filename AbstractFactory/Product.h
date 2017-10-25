#ifndef __PRODUCT_H__
#define __PRODUCT_H__

class Product
{
public:
	Product();
	virtual ~Product();
	virtual void Operation() = 0;
};

class ConcreteProductA:public Product
{
public:
	ConcreteProductA();
	~ConcreteProductA();
	virtual void Operation();
};

class ConcreteProductB:public Product
{
public:
	ConcreteProductB();
	~ConcreteProductB();
	virtual void Operation();
};

#endif