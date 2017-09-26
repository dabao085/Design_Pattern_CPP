#ifndef __COMPONENT_H__
#define __COMPONENT_H__
#include <vector>

class Component
{
public:
	Component();
	virtual ~Component();
	virtual void Operation() = 0;
	virtual void Add(Component* pComp);
	virtual void Remove(Component* pComp);	

	virtual Component* GetChild(int index);
};

class Leaf:public Component
{
public:
	Leaf();
	virtual ~Leaf();
	virtual void Operation();
};

class Composite:public Component
{
public:
	Composite();
	virtual ~Composite();
	virtual void Add(Component* pComp);
	virtual void Remove(Component* pComp);	
	virtual void Operation();
	virtual Component* GetChild(int index);

private:
	std::vector<Component*> _pCompVec;
};

#endif