#include "BankAccount.h"
#include <iostream>
#include <string>
using namespace std;
account::account(string n,string i) 
{
	name = n;
	id = i;
	balance = 0;
}
void account::deposit(double d)
{
	balance += d;
}
void account::withdraw(double w)
{
	if(w>balance)
	{
		cout << "you haven't enough balance"<<endl;
	}
	else
	balance -= w;
}
void account ::data()
{
	cout << "name :" << " " << name <<endl<< "id :" << " " << id<<endl << "balance =" << " " << balance<<endl;
}