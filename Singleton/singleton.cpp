#include "singleton.h"
#include <iostream>

Singleton::Singleton()
{

}

Singleton::~Singleton()
{

}

Singleton* Singleton::GetInstance()
{
	if(_pInstance == NULL)
		_pInstance = new Singleton();
	return _pInstance;
}

Singleton* Singleton::_pInstance = 0;