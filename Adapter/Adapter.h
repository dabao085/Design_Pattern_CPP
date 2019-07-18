#ifndef __ADAPTER_H__
#define __ADAPTER_H__

//新的接口
class Target
{
public:
	Target();
	virtual ~Target();
	virtual void Request();
};

//老的接口
class Adaptee
{
public:
	Adaptee();
	~Adaptee();
	void SpecificRequest();
};

//适配器类
class Adapter : public Target, private Adaptee
{
public:
	Adapter();
	~Adapter();
	virtual void Request();
};

//另一种适配器类，不private继承老的接口，而是将老的接口做为参数，但需要将老接口中的函数设置为public，意为从外部调用
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