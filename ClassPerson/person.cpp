#include <string>
#include<iostream>
#include "person.h"
using namespace std;

person::person()
{
	lname = "";
	fname[0] = '\0';

}
person::person(const string & ln, const char * fn )
{
	lname = ln;
	strcpy_s(fname, fn);
}
void person::show()
{
	cout << lname << " " << fname << endl;
}
void person::formalShow()
{
	cout << fname << " " << lname << endl;
}
