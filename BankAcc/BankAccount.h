#pragma once
#include <string>
#include <iostream>
#ifndef _Acc_
#define _Acc_
class account {

private:
	std::string name;
	std::string id;
	double balance;

public:
	account(std::string n,std::string i);
	void deposit(double d);
	void withdraw(double w);
	void data();

};
#endif