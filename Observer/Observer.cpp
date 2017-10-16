#include <iostream>
#include <algorithm>
#include <list>
#include "Observer.h"

Subject::Subject()
{

}

Subject::~Subject()
{
	
}

void Subject::Notify()
{
	for(auto p:m_list)
		p->Update(this);
}

void Subject::Add(Observer *pOb)
{
	m_list.push_back(pOb);
}

void Subject::Delete(Observer *pOb)
{
	list<Observer*>::iterator iter;
	iter = find(m_list.begin(),m_list.end(),pOb);
	if(iter != m_list.end())
		m_list.erase(iter);
}

void Subject::SetState(const string& newState)
{
	this->_State = newState;
}

string Subject::GetState()
{
	return _State;
}

ConcreteSubjectA::ConcreteSubjectA()
{

}

ConcreteSubjectA::~ConcreteSubjectA()
{

}

ConcreteSubjectB::ConcreteSubjectB()
{

}

ConcreteSubjectB::~ConcreteSubjectB()
{
	
}

Observer::Observer()
{

}

Observer::~Observer()
{

}

ConcreteObserverA::ConcreteObserverA()
{

}

ConcreteObserverA::~ConcreteObserverA()
{

}

void ConcreteObserverA::Update(Subject *pSub)
{
	this->_State = pSub->GetState();
	cout << "ConcreteObserverA::_State: " << this->_State << endl;
}

ConcreteObserverB::ConcreteObserverB()
{

}

ConcreteObserverB::~ConcreteObserverB()
{

}

void ConcreteObserverB::Update(Subject *pSub)
{
	this->_State = pSub->GetState();
	cout << "ConcreteObserverB::_State: " << this->_State << endl;
}