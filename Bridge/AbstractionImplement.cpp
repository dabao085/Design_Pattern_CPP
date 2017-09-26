#include "AbstractionImplement.h"
#include <iostream>

AbstractionImplement::AbstractionImplement()
{

}

AbstractionImplement::~AbstractionImplement()
{

}

ConcreateImplementA::ConcreateImplementA()
{

}

ConcreateImplementA::~ConcreateImplementA()
{

}

void ConcreateImplementA::Operation()
{
	std::cout << "ConcreateImplementA::Operation()" << std::endl;
}

ConcreateImplementB::ConcreateImplementB()
{

}

ConcreateImplementB::~ConcreateImplementB()
{

}

void ConcreateImplementB::Operation()
{
	std::cout << "ConcreateImplementB::Operation()" << std::endl;
}
