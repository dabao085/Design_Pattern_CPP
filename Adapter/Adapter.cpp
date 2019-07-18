#include "Adapter.h"
#include <iostream>
using namespace std;

Target::Target()
{
	
}

Target::~Target()
{

}

void Target::Request()
{
	cout << "Target::Request()" << endl;
}

Adaptee::Adaptee()
{

}

Adaptee::~Adaptee()
{

}

void Adaptee::SpecificRequest()
{
	cout << "Adaptee::SpecificRequest()" << endl;
}

Adapter::Adapter()
{

}

Adapter::~Adapter()
{

}

void Adapter::Request()
{
	cout << "Adapter::Request()" << endl;
	this->SpecificRequest();	//调用已有接口
	cout << "------------------" << endl;
}

Adapter1::Adapter1():_pAdaptee(new Adaptee)
{

}

Adapter1::Adapter1(Adaptee* adaptee):_pAdaptee(adaptee)
{
}

Adapter1::~Adapter1()
{

}

void Adapter1::Request()
{
	cout << "Adapter1::Request()" << endl;
	_pAdaptee->SpecificRequest();
	cout << "------------------" << endl;
}