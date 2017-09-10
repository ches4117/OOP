#include<iostream>
#include<string>
using namespace std;

class List
{
		// inserts at index.
		// E.g., insert_at(2, 4.2) into [9.5, 3.0, 0.6, 12.5]
		// would produce [9.5, 3.0, 4.2, 0.6, 12.5]
		
		public:
			List();
			~List();
			void menu();
			void insert_at(int index, float value);
			float value_at(int index);
			void remove_at(int index);
		private:
			float *dynamic_array;
			float value;
			int choose;
			int index;
			int size; // the number of elements in the array
			int capacity; // the capacity of the array
			void expand();
};
