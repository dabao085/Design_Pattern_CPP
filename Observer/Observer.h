#ifndef __OBSERVER_H__
#define __OBSERVER_H__
#include <string>
#include <list>
using namespace std;

class Observer;

class Subject
{
public:
	Subject();
	virtual ~Subject();

public:
	virtual void Notify();
	virtual void Add(Observer *);
	virtual void Delete(Observer *);
	virtual string GetState();
	virtual void SetState(const string& newState);
private:
	string _State;
	list<Observer*> m_list;
};

class ConcreteSubjectA:public Subject
{
public:
	ConcreteSubjectA();
	~ConcreteSubjectA();
};

class ConcreteSubjectB:public Subject
{
public:
	ConcreteSubjectB();
	~ConcreteSubjectB();
};

class Observer
{
public:
	Observer();
	virtual ~Observer();

public:
	virtual void Update(Subject *) = 0;
};

class ConcreteObserverA:public Observer
{
public:
	ConcreteObserverA();
	~ConcreteObserverA();
	void Update(Subject *);
private:
	string _State;
};

class ConcreteObserverB:public Observer
{
public:
	ConcreteObserverB();
	~ConcreteObserverB();
	void Update(Subject *);
private:
	string _State;
};

#endif