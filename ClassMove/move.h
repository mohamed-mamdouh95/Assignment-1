#pragma once
class move
{
private:
	double x;
	double y;

public:
	move(double a = 0, double b = 0);
	void showMove();
	move add(const move & m);
	void reset(double a = 0, double b = 0);




};
