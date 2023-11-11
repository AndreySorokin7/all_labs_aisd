#ifndef _MY_VECTOR_
#define _MY_VECTOR_
using namespace std;
#pragma once
#include "stack.h"
#include "stack.cpp"
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>
#include <iostream>

class TArithmeticExpression
{
	string infix;
	string postfix;
	vector<int> kolcifr;
public:
	TArithmeticExpression(string infx);
	string GetInfix() const // ������ ����� ������ �������� noexcept?
	{
		return infix;
	}
	string GetPostfix() const // ������ ����� ������ �������� noexcept?
	{
		return postfix;
	}
	void ConvertToPostfix();
	int Priority(const char prior);
	double Calculate();
};


#endif