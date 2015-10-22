#include "person.h"
#include<string>
#include<iostream>
using namespace std;
int main()
{
	person p;
	cout << "using default constructor :" << " ";
	p.show();
	cout << endl;
	person p1("mohamed");
	cout << "using one parameter constructor " << endl;
	cout << "---------------------------------"<<endl;
	cout << "using show method :" << " ";
	p1.show();
	cout << "using formalShow method :" << " ";
	p1.formalShow();
	cout << endl;
	person p2("mohamed", "mamdouh");
	cout << "using two parameter constructor " << endl;
	cout << "---------------------------------"<<endl;
	cout << "using show method :" << " ";
	p2.show();
	cout << "using formalShow method :" << " ";
	p2.formalShow();
	system("pause");

}