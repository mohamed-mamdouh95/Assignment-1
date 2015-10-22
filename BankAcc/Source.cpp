#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;
int main()
{

	account x("mido", "900");
	x.deposit(500);
	x.withdraw(600);
	x.data();
	system("pause");

}