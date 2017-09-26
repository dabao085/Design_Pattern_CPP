#ifndef __ABSTRACTION_IMPLEMENT_H__
#define __ABSTRACTION_IMPLEMENT_H__

class AbstractionImplement
{
public:
	virtual void Operation() = 0;
	virtual ~AbstractionImplement();
protected:
	AbstractionImplement();
};

class ConcreateImplementA:public AbstractionImplement
{
public:
	ConcreateImplementA();
	~ConcreateImplementA();
	void Operation();
};

class ConcreateImplementB:public AbstractionImplement
{
public:
	ConcreateImplementB();
	~ConcreateImplementB();
	void Operation();
};
#endif