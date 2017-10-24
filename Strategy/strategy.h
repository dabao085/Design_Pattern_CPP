#ifndef __STRATEGY_H__
#define __STRATEGY_H__

class CStrategy
{
public:
	CStrategy();
	virtual ~CStrategy();
	virtual void AlgorithmFunc() = 0;
};

class ConcreteStrategyA:public CStrategy
{
public:
	ConcreteStrategyA();
	~ConcreteStrategyA();
	virtual void AlgorithmFunc();
};

class ConcreteStrategyB:public CStrategy
{
public:
	ConcreteStrategyB();
	~ConcreteStrategyB();
	virtual void AlgorithmFunc();
};

class CContext
{
public:
	CContext(CStrategy* pStrategy):_pStrategy(pStrategy){}
	~CContext()
	{
		//delete _pStrategy;
	}
	void setStrategy(CStrategy* pStrategy){_pStrategy = pStrategy;}
	void DoSomething();
private:
	CStrategy *_pStrategy;
};

#endif
