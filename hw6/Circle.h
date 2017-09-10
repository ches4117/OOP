#include<iostream>
#include<cmath>
#include"MyShape.h"
using namespace std;
class Circle:public MyShape
{
	public:
	Circle(int dia):MyShape(2)
	{
			diameter = dia;
	};
	double findArea()
	{	
		return M_PI*(diameter/(2.0))*(diameter/2.0);
	}

	void showShape()
	{
		cout << "Shape is Circle." << endl;
	}

	private:
		int diameter;
};
