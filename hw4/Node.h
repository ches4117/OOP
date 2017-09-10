#include<iostream>
using namespace std;

class Node {

		public:
		class node {
				public:
				node();
				~node();
				int data;
				int index;
				node *left;
				node *right;
				friend bool same_tree(node* a, node* b)
				{
					if (!a && !b)  return true;
					return (a && b && (a->data == b->data) && same_tree(a->left, b->left) && same_tree(a->right,b->right));
				}
		};
		Node();
		~Node();
		void menu();
		void insert();
		void insert(int, node*, int);
		void remove(node*);
		private:
		int node_num;
		int value, index;
		string tree;
		node *root, *com_root, *tmp;
};

