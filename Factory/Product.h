#ifndef __PRODUCT_H__
#define __PRODUCT_H__

class Product
{
public:
	Product();
	virtual ~Product();
	virtual void Operation() = 0;
};

class ProductA:public Product
{
public:
	ProductA();
	~ProductA();
	void Operation();
};

class ProductB:public Product
{
public:
	ProductB();
	~ProductB();
	void Operation();	
};

class ProductC:public Product
{
public:
	ProductC();
	~ProductC();
	void Operation();	
};

#endif