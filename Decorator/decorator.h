#ifndef __DECORATOR_H__
#define __DECORATOR_H__

class Component
{
public:
	Component();
	virtual ~Component();

public:
	virtual void Operation() = 0;
};

class ConcreteComponent:public Component
{
public:
	ConcreteComponent();
	~ConcreteComponent();

public:
	void Operation();
};

class Decorator:public Component
{
public:
	Decorator(Component* pComp):_mPComp(pComp)
	{

	}
	virtual ~Decorator();

public:
	virtual void Operation();

protected:
	Component* _mPComp;
};

class ConcreteDecoratorA:public Decorator
{
public:
	ConcreteDecoratorA(Component* pComp):Decorator(pComp)
	{

	}
	~ConcreteDecoratorA();

public:
	void Operation();
	void AddOperation();
};

class ConcreteDecoratorB:public Decorator
{
public:
	ConcreteDecoratorB(Component* pComp):Decorator(pComp)
	{

	}
	~ConcreteDecoratorB();

public:
	void Operation();
	void AddOperation();
};

#endif