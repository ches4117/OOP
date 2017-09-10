#include<iostream>
#include"List.h"
#include"LnList.h"
#include"Node.h"

using namespace std;
int main(int argc, char **argv)
{
		List myList;
		LnList myLnList;
		Node myNode;
		int num;
		while(true)
		{
				cout << "1. List " << endl;
				cout << "2. LnList "<< endl;
				cout << "3. Sametree "<< endl;
				cout << "4. exit program "<< endl;

				cin >> num;

				switch(num)
				{
						case 1:
								myList.menu();
								break;

						case 2:
								myLnList.menu();
								break;

						case 3:
								myNode.menu();
								break;
						case 4:
								break;
				}
				if(num == 4)
				{
						cout << "quit program" << endl;
						break;
				}
		}
		return 0;
}
