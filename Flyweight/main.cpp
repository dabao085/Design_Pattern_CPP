#include "Flyweight.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string outState = "outState";

	FlyweightFactory* flyFac = new FlyweightFactory();

	Flyweight* fly1 = flyFac->GetFlyweight(string("inState1"));
	Flyweight* fly2 = flyFac->GetFlyweight(string("inState2"));	

	cout << "fly1->Operation" << endl;
	fly1->Operation(outState);

	cout << "fly2->Operation" << endl;
	fly2->Operation(outState);

	flyFac->GetFlyweightCount();

	return 0;
}