#include<iostream>
#include"Node.h"
using namespace std;
Node::Node()
{
		value = 0;
}

Node::~Node()
{
	remove(root);
	remove(com_root);
}

Node::node::node()
{
}

Node::node::~node()
{

}
void Node::menu()
{
		cout << endl;
		insert();
}

void Node::insert()
{
		while(true)
		{
				cout <<"Intput: ";
				cin >> tree;
				if(tree == "ainsert")
				{
						cin >> value >> index;
						if(index == 1)
						{
								root = new node;
								root->data = value;
								root->left = NULL;
								root->right = NULL;
								root->index = index;
						}
						else
								insert(value, root, index);
				}
				else if(tree == "binsert")
				{
						cin >> value >> index;
						if(index == 1)
						{
								com_root = new node;
								com_root->data = value;
								com_root->left = NULL;
								com_root->right = NULL;
								com_root->index = index;
						}
						else
								insert(value, com_root, index);
				}
				else
					break;
		}
				if(same_tree(root,com_root) == false) cout << "not same tree" << endl;
				else cout <<"same tree" << endl;
}


void Node::insert(int value, node* leaf, int index)
{

		if(index == leaf->index * 2 && leaf->left == NULL)
		{
				leaf->left = new node;
				leaf->left->data = value;
				leaf->left->left = NULL;    //Sets the left child of the child node to null
				leaf->left->right = NULL;   //Sets the right child of the child node to null
				leaf->left->index = leaf->index * 2;
				return;
		}
		else if(index == (leaf->index * 2 + 1) && leaf->right == NULL)
		{
				leaf->right = new node;
				leaf->right->data = value;
				leaf->right->left = NULL;    //Sets the left child of the child node to null
				leaf->right->right = NULL;   //Sets the right child of the child node to null
				leaf->right->index = (leaf->index * 2 + 1);
				return;
		}
		if(leaf->left != NULL)
		{
				insert(value, leaf->left, index);
		}
		if(leaf->right != NULL)
		{
				insert(value, leaf->right, index);
		}
}

void Node::remove(node* leaf)
{
	if(leaf->left != NULL)
	{	
		remove(leaf->left);
	}
	if(leaf->right != NULL)
	{
		remove(leaf->right);
	}
	delete leaf;
}
