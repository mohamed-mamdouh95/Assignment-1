#include "move.h"
#include <iostream>
int main()
{
	move a(2,1);
	move b(9, 3);
	move c = a.add(b);
	c.showMove();
	system("pause");
}