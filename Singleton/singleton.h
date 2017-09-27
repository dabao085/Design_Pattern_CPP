#ifndef __SINGLETON_H__
#define __SINGLETON_H__
#include <iostream>

class Singleton
{
public:
	static Singleton* GetInstance();
	void PrintVal()
	{
		std::cout << val << std::endl;
	}

	void SetVal(int val)
	{
		this->val = val;
	}
	Singleton();
	~Singleton();
private:	
	Singleton(const Singleton&);
	Singleton& operator=(const Singleton&);
private:
	static Singleton* _pInstance;
	int val = 0;
};

#endif