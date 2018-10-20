#pragma once
#include<iostream>
using namespace std;
class Point
{
private :
	int xVal;
	int yVal;
public:
	Point();
	~Point();
	const int x = 7;
	Point(int xVal, int yVal);
	Point(const Point&);
	//Point 
	int getXVal();
	void setXVal(int xVal);
	void setYVal(int yVal);
	int getYVal();
	
	void Show();

};

