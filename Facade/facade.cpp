#include "facade.h"
#include <iostream>

Compiler::Compiler()
{
	this->pPaser = new Paser();
	this->pGrammerTree = new GrammerTree();
	this->pToken = new Token();
}

Compiler::~Compiler()
{
	delete pPaser;
	delete pGrammerTree;
	delete pToken;
	
	pPaser = NULL;
	pGrammerTree = NULL;
	pToken = NULL;	
}

void Compiler::Operation()
{
	pPaser->Operation();
	pGrammerTree->Operation();
	pToken->Operation();
}

Paser::Paser()
{

}

Paser::~Paser()
{

}

void Paser::Operation()
{
	std::cout << "Paser::Operation" << std::endl;
}

GrammerTree::GrammerTree()
{

}

GrammerTree::~GrammerTree()
{

}

void GrammerTree::Operation()
{
	std::cout << "GrammerTree::Operation" << std::endl;
}

Token::Token()
{

}

Token::~Token()
{

}

void Token::Operation()
{
	std::cout << "Token::Operation" << std::endl;
}