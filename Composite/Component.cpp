#include "Component.h"
#include <iostream>
#include <vector>

Component::Component()
{
	
}

Component::~Component()
{

}

void Component::Add(Component* pComp)
{
	std::cout << "Component::Add" << std::endl;
}

void Component::Remove(Component* pComp)
{
	std::cout << "Component::Remove" << std::endl;
}

Component* Component::GetChild(int index)
{
	return NULL;
}

Leaf::Leaf()
{

}

Leaf::~Leaf()
{

}

void Leaf::Operation()
{
	std::cout << "Leaf::Operation" << std::endl;
}

Composite::Composite()
{

}

Composite::~Composite()
{

}

std::vector<Component*>::iterator MyFunc(std::vector<Component*> &vec, Component* pComp)
{
	for(std::vector<Component*>::iterator iter = vec.begin();iter != vec.end();iter++)
		if(*iter == pComp)
			return iter;
}

//template version
template<typename T>
typename std::vector<T>::iterator MyFuncTemplate(std::vector<T> &t, T pT)
{
	for( auto iter = t.begin();iter != t.end();iter++)
		if(*iter == pT)
			return iter;
}

void Composite::Add(Component* pComp)
{
	_pCompVec.push_back(pComp);
}

void Composite::Remove(Component* pComp)
{
	auto a = MyFuncTemplate(_pCompVec, pComp);
	_pCompVec.erase(a);
}

void Composite::Operation()
{
	std::cout << "Composite::Operation" << std::endl;
	for(int i = 0;i < _pCompVec.size();++i)
		_pCompVec[i]->Operation();
}

Component* Composite::GetChild(int index)
{
	if(index < _pCompVec.size())
		return _pCompVec.at(index);
	else
		return NULL;
}