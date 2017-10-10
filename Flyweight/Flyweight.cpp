#include "Flyweight.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string Flyweight::GetInState()
{
	return _InState;
}

Flyweight::~Flyweight()
{

}

Flyweight::Flyweight(const string& str)
{
	_InState = str;
}

ConcreteFlyweight::ConcreteFlyweight(const string& str):Flyweight(str)
{

}

ConcreteFlyweight::~ConcreteFlyweight()
{

}

void ConcreteFlyweight::Operation(const string& OutState)
{
	std::cout << OutState << std::endl;	
	std::cout << this->GetInState() << std::endl;
}

UnsharedConcreteFlyweight::UnsharedConcreteFlyweight(const string& str):Flyweight(str)
{

}

UnsharedConcreteFlyweight::~UnsharedConcreteFlyweight()
{

}

void UnsharedConcreteFlyweight::Operation(const string& OutState)
{
	std::cout << OutState << std::endl;	
	std::cout << this->GetInState() << std::endl;
}

FlyweightFactory::FlyweightFactory()
{

}

FlyweightFactory::~FlyweightFactory()
{

}

Flyweight* FlyweightFactory::GetFlyweight(const string& key)
{
	for(auto flyWeight : m_vectorFly)
		if(flyWeight->GetInState() == key)
			return flyWeight;

	Flyweight *temp = new ConcreteFlyweight(key);
	m_vectorFly.push_back(temp);
	return temp;
}

int FlyweightFactory::GetFlyweightCount()
{	
	std::cout << m_vectorFly.size() << std::endl;
	return m_vectorFly.size();
}