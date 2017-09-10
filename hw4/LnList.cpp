#include<iostream>
#include<string>
#include"LnList.h"
using namespace std;

LnList::LnList()
{
		num = 7;
		position = -1;
		first = new Node;
		first->data = 0;
		first->next = NULL;
		current = first;

		for(int i = 1; i < num; i++)
		{
				Node *newNode = new Node;
				newNode->data = i;
				newNode->next = NULL;

				current->next = newNode;
				current = current->next;
		}
}

LnList::~LnList()
{
		current = first;
		for(int i = 0; i < num; i++)
		{
				tmp = current;
				current = current->next;
				delete tmp;
		}
	
}

void LnList::menu()
{
		current = first;
		for(int i = 0; i < num; i++)
		{
				cout << current->data << ", ";
				current = current->next;
		}
		cout << endl;

		while(true)
		{
				cout <<endl << "1. Insert a number. " << endl;
				cout << "2. Find a number. " << endl;
				cout << "3. Remove a number. " << endl;
				cout << "4. exit. " <<endl << endl;
				cout << "Input:"; 
				cin >> choose;
				switch(choose)
				{
						case 1:
								cout << "Input number value."<< endl;
								cin >> value;
								insert(value);

								current = first;
								num++;
								for(int i = 0; i < num; i++)
								{
										cout << current->data << ", ";
										current = current->next;
								}
								break;
						case 2:
								
								cout << "Input number value."<< endl;
								cin >> value;
								if(find(value) == -1)
								{
										cout << "Cannot find this number." << endl;
										continue;
								}
							
								cout << find(value) << endl;
								break;
						case 3:
								cout << "Input number value."<< endl;
								cin >> value;
								if(remove(value) == true)
								{
										current = first;
										while(current->next)
										{
												cout << current->data <<", ";
												current = current->next;
										}
										cout << current->data << endl;
										num--;
								}
								else
								{
										cout << "Cannot find this number." << endl;
								}
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
void LnList::insert(int value)
{
				current = first;
				while(current->next)
					current = current->next;

				Node *newNode = new Node;
				newNode->data = value;
				newNode->next = NULL;

				current->next = newNode;
}

int LnList::find(int value)
{
		current = first;
		position = -1;
		for(int i = 0; i < num; i++)
		{
				if(current->data == value)
				{
					position = i;
					break;
				}
				else
					current = current->next;

		}

		return position;

}

bool LnList::remove(int value)
{
		current = first;
		if(first->data == value)
		{
				first = current->next;
				delete current;
				return true;
		}

		tmp = current;
		current = current->next;
		while(current->data)
		{
				if(current->data == value)
				{
						tmp->next = current->next;
						delete current;
						return true;
				}
				tmp = current;
				current = current->next;

		}
		return false;

}

