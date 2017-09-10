#include<iostream>
#include<fstream>
#include"List.h"
using namespace std;

List::List()
{
		size = 4;
		capacity = 20;
		dynamic_array = new float[20];
		dynamic_array[0] = 9.5;
		dynamic_array[1] = 3.0;
		dynamic_array[2] = 0.6;
		dynamic_array[3] = 12.5;
}
void List::menu()
{
		for(int i = 0; i < size; i++)
				cout << dynamic_array[i] <<", ";
		cout << endl << endl;
		while(true)
		{
				cout <<endl << "1. Insert a number. " << endl;
				cout << "2. Find a number. " << endl;
				cout << "3. Remove a number. " << endl;
				cout << "4. exit. " << endl << endl;
				cout << "Input:"; 
				cin >> choose;

				switch(choose)
				{
						case 1:
								cout << "Input number index and value."<< endl;
								cin >> index >> value;

								if(index > size)
								{
										cout << "A bad input."<<endl<<endl;
										continue;
								}

								insert_at(index, value);
								cout << "Output: ";
								for(int i = 0; i < size; i++)
										cout << dynamic_array[i] <<", ";
								cout << endl;
								break;
						case 2:
								cout << "Input the index of number." << endl;
								cin >> index;

								cout << "Output: This number is " << value_at(index) << "." << endl;
								break;
						case 3:
								cout << "Input the index of number. " << endl;
								cin >> index;
								remove_at(index);
								cout << "Output: ";
								for(int i = 0; i < size; i++)
										cout << dynamic_array[i] <<", ";
								cout << endl;
								break;
						case 4:
								break;
				}
				if(choose == 4)
				{
						cout << endl;
						break;
				}
		}
}

List::~List()
{
	delete []dynamic_array;
}
void List::insert_at(int index, float value)
{
		size++;
		float tmp1, tmp2;
		tmp1 = dynamic_array[index];
		dynamic_array[index] = value;

		for(int i = index + 1; i < size; i++)
		{
				tmp2 = dynamic_array[i];
				dynamic_array[i] = tmp1;
				tmp1 = tmp2;
		}

		dynamic_array[size] = tmp2;

		if(size == capacity)
				expand();
}
void List::expand()
{
		float *tmp_array = new float[capacity*2];
		capacity *= 2;
		for(int i = 0; i < size; i++)
				tmp_array[i] = dynamic_array[i];

		delete []dynamic_array;

}

float List::value_at(int index)
{
		return dynamic_array[index];
}

void List::remove_at(int index)
{
		float *tmp_array = new float[size - 1];

		for(int i = index; i < size; i++)
				dynamic_array[i] = dynamic_array[i+1];

		for(int i = 0; i < size - 1; i++)
				tmp_array[i] = dynamic_array[i];

		delete []dynamic_array;

		dynamic_array = tmp_array;
		size--;
}
