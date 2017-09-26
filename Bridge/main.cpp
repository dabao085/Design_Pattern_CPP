#include "Abstraction.h"
#include "AbstractionImplement.h"
#include <iostream>

using namespace std;

int main()
{
	AbstractionImplement* pAImp1 = new ConcreateImplementA();
	Abstraction* pA1 = new RefinedAbstractionA(pAImp1);
	pA1->Operation();

	AbstractionImplement* pAImp2 = new ConcreateImplementA();
	Abstraction* pA2 = new RefinedAbstractionB(pAImp2);
	pA2->Operation();	

	AbstractionImplement* pAImp3 = new ConcreateImplementB();
	Abstraction* pA3 = new RefinedAbstractionA(pAImp3);
	pA3->Operation();	

	AbstractionImplement* pAImp4 = new ConcreateImplementB();
	Abstraction* pA4 = new RefinedAbstractionB(pAImp4);
	pA4->Operation();	

	return 0;
}