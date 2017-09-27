#ifndef __FACTORY_H__
#define __FACTORY_H__

class Product;

class Factory
{
public:
	Factory();
	~Factory();
	static Product* Create(int type);

public:
	enum 
	{
		PRODUCTA = 0,
		PRODUCTB = 1,
		PRODUCTC = 2
	};
};

#endif