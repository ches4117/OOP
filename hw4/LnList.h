#include<iostream>

using namespace std;

class LnList
{
		struct Node {
				int data;
				Node *next;
		};

		public:
			LnList();// constructor
			~LnList(); // destructor
			void menu();
			void insert(int value);
			int find(int value);
			bool remove(int value); // returns true if successfully removed
			// false otherwise
		private:
			Node *first, *current, *tmp;
			int value, num, choose;
			int position;

};
