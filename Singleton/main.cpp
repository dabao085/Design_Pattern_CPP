#include "singleton.h"
#include <iostream>

using namespace std;

int main()
{
	Singleton* single = Singleton::GetInstance();

	single->SetVal(1);

	Singleton::GetInstance()->PrintVal();

	return 0;
}