#ifndef __FLYWEIGHT_H__
#define __FLYWEIGHT_H__

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Flyweight
{
public:
	virtual void Operation(const string& OutState) = 0;
	string GetInState();
	virtual ~Flyweight();

protected:
	Flyweight(const string& str);

private:
	string _InState;
};

class ConcreteFlyweight:public Flyweight
{
public:
	virtual void Operation(const string& OutState);
	ConcreteFlyweight(const string& str);
	~ConcreteFlyweight();
};

class UnsharedConcreteFlyweight:public Flyweight
{
public:
	virtual void Operation(const string& OutState);
	UnsharedConcreteFlyweight(const string& str);
	~UnsharedConcreteFlyweight();
};

class FlyweightFactory
{
public:
	FlyweightFactory();
	~FlyweightFactory();
	Flyweight* GetFlyweight(const string& key);
	int GetFlyweightCount();

private:
	std::vector<Flyweight*> m_vectorFly;
};

#endif