#pragma once
#include <string>
using namespace std;
class person
{
private:
	static const int limit = 25;
	string lname;
	char fname[limit];
	
public:
	person();
	person(const string & ln, const char * fn = "heyyou");
	void show();
	void formalShow();
			

									


};
