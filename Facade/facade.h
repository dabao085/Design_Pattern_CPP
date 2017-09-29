#ifndef __FACADE_H__
#define __FACADE_H__
#include <iostream>

class Paser;
class GrammerTree;
class Token;

class Compiler
{
public:
	Compiler();
	~Compiler();

	void Operation();
private:
	Paser* pPaser;
	GrammerTree* pGrammerTree;
	Token* pToken;
};

class Paser
{
public:
	Paser();
	~Paser();

public:
	void Operation();
};

class GrammerTree
{
public:
	GrammerTree();
	~GrammerTree();

public:
	void Operation();
};

class Token
{
public:
	Token();
	~Token();

public:
	void Operation();
};
#endif