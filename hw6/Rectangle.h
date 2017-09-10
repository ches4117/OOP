#include<iostream>
#include"MyShape.h"
using namespace std;
class Rectangle:public MyShape
{
	public:
	Rectangle(int len, int wid):MyShape(1)
	{
			length = len;
			width = wid;
	};
	double findArea()
	{	
		return (double)length * width;
	}

	void showShape()
	{
		cout << "Shape is Rectangle." << endl;
	}

	private:
		int length, width;
};
