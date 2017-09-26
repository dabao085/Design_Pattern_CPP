#ifndef __ADAPTER_H__
#define __ADAPTER_H__

class Target
{
public:
	Target();
	virtual ~Target();
	virtual void Request();
};

class Adaptee
{
public:
	Adaptee();
	~Adaptee();
	void SpecificRequest();
};

class Adapter:public Target, private Adaptee
{
public:
	Adapter();
	~Adapter();
	virtual void Request();
};

class Adapter1: public Target
{
public:
	Adapter1();
	Adapter1(Adaptee* adaptee);
	~Adapter1();
	virtual void Request();
private:
	Adaptee*	_pAdaptee;
};
#endif