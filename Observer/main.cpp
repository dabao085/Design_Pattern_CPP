#include "Observer.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Subject * pSub = new ConcreteSubjectA();
	Observer *pOb1 = new ConcreteObserverA();
	Observer *pOb2 = new ConcreteObserverB();

	string state("hello_world");

	pSub->SetState(state);

	pSub->Add(pOb1);
	pSub->Add(pOb2);

	pSub->Notify();

	state = "chueng hang";
	pSub->SetState(state);
	pSub->Notify();

	//pOb1->

	return 0;
}