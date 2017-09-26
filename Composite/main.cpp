#include "Component.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	Component* pComp1 = new Composite();
	Component* pLeaf1 = new Leaf();
	Component* pLeaf2 = new Leaf();
	Component* pComp2 = new Composite();
	Component* pLeaf3 = new Leaf();
	Component* pLeaf4 = new Leaf();
	Component* pLeaf5 = new Leaf();

	pComp1->Add(pLeaf1);
	pComp1->Add(pLeaf2);
	pComp1->Add(pComp2);
	pComp2->Add(pLeaf3);
	pComp2->Add(pLeaf4);
	pComp2->Add(pLeaf5);

	pComp1->Operation();

	cout << "After pComp1->Operation()......" << endl;

	pComp1->Remove(pLeaf1);
	pComp1->Operation();

	cout << "......" << endl;
	pComp1->Remove(pComp2);
	pComp1->Operation();
	return 0;
}