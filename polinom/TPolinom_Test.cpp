#include <iostream>
#include "TList.h"
#include "TPolinom.h"
#include <vector>
#include <string>
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	vector<int> a = { 1,2,3,4,2,3,4,5,4,5,6,7,3,4,5,6};
	vector<int> b = { 1,2,3,4,2,3,4,5,3,4,5,6};
	TPolinom pol(a);//конструктор
	TPolinom pol1(pol);//копирования
	TPolinom pol2(b);
	bool flag = (pol == pol1);
	cout <<"pol" << "\n";
	cout<< pol.ToString();//преобразование в строку
	cout << "\n";
	cout << "pol1" << "\n";
	cout << pol1.ToString();
	cout << "\n";
	cout << "pol == pol1" << "\n";
	cout << flag;//==
	cout << "\n";
	cout << "pol2" << "\n";
	cout << pol2.ToString();
	flag = (pol == pol2);
	cout << "\n";
	cout << "pol == pol2" << "\n";
	cout << flag;//== 
	pol1 = pol2;//=
	cout << "\n";
	cout << "pol1 = pol2" << "\n";
	cout << pol1.ToString();
	TMonom mon(1, 2, 3, 5);
	pol1.AddMonom(mon);//addmonom
	cout << "\n";
	cout << "pol1.AddMonom(1235);" << "\n";
	cout << pol1.ToString();
	TPolinom pol3(a);
	pol3=pol.AddPolinom(pol2);
	cout << "\n";
	cout << "pol3=pol.AddPolinom(pol2);" << "\n";
	cout << pol3.ToString();
	//vector<int> a1 = { 1,1,1,1,5,1,1,1 };
	//TPolinom polinom(a1);
	//cout << polinom.ToString();
	/*vector<int> a1 = { 1,1,1,1, 5,1,1,1, 1,2,3,4, 2,3,4,5, 4,5,6,7};
	TPolinom polinom(a1);
	cout << polinom.ToString();
	cout << "\n";
	cout << polinom.GetLength();*/

}