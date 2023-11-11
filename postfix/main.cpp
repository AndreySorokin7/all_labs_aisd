#include <iostream>
#include "postfix.h"
#include "postfix.cpp"

int main()
{
	string exprStr;
	cout << "Enter expression :";
	cin >> exprStr;
	TArithmeticExpression expr(exprStr);
	expr.ConvertToPostfix();
	cout << expr.GetInfix() << endl;
	cout << expr.GetPostfix() << endl;
	cout << expr.Calculate() << endl;
	setlocale(LC_ALL, "Russian");
}
