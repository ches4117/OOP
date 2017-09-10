#include<iostream>
using namespace std;

#ifndef MYSHAPE
#define MYSHAPE
class MyShape
{
	public:
	MyShape(int num)
	{
			typeOfShape = num;
	}
	virtual double findArea() = 0;
	virtual void showShape()
	{
		cout<<"Shape is a Generic"<<endl;
	}
	private:
		int typeOfShape;

};
#endif
