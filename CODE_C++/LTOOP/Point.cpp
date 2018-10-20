#include "Point.h"



Point::Point()
{
}


Point::~Point()
{
}
Point::Point(int xVal, int yVal) 
{
	this->xVal = xVal;
	this->yVal = yVal;
	//this->x = 9;
}
Point::Point(const Point &p) {
	this->xVal = p.xVal;
	this->yVal = p.yVal;
}
int Point:: getXVal() {
	return this->xVal;
}
void Point:: setXVal(int xVal) {
	this->xVal = xVal;
}
void Point:: setYVal(int yVal) {
	this->xVal = yVal;
}
int Point::getYVal() {
	return this->yVal;
}
void Point::Show() {
	cout << "Toa Do (x , y) = "<<"("<<this->xVal <<","<<this->yVal << ")" << endl;
}