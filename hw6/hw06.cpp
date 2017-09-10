#include<iostream>
#include"MyShape.h"
#include"Rectangle.h"
#include"Circle.h"
using namespace std;
int main()
{
		int choose, i;
		int length, width, Diameter;
		MyShape* theArray[5];
		for(i = 0; i < 5; i++)
		{
				cout<<"1. rectangle"<<endl<<"2. circle"<<endl;
				cin >> choose;
				switch(choose)
				{
						case 1:
								cout << "Lengh:";
								cin >> length;
								cout << endl;
								cout << "Width:";
								cin >> width;
								cout << endl;
								theArray[i] = new Rectangle(length,width);	
								break;
						case 2:
								cout << "Diameter:";
								cin >> Diameter;
								theArray[i] = new Circle(Diameter);	
								break;
						default:
								cout << "Error!!" << endl;
								cout << "Input again" << endl;
								i--;
								break;
				}
		}
		cout << endl;
		for(i = 0; i < 5; i++) {
				theArray[i]->showShape();
				cout<<"Area: "<<theArray[i]->findArea()<<endl;
		}
		for(i = 0; i < 5; i++)
			delete theArray[i];
		return 0;
}
