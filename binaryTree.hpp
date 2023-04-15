#ifndef _BINARY_TREE_
#define _BINARY_TREE_
#include "ParticipantOfTheCompetition.hpp"

template<typename T>
class BinaryTree
{
private:
	
	template<typename T>
	class Node
	{
	public:
		T data;
		Node* leftChild;
		Node* rightChild;

		Node(T data = T()) : data(data), leftChild(nullptr), rightChild(nullptr)
		{
		}
	};

	Node<T>* root;

	void insertHelper(T data, Node<T>* root)
	{
		if (data < root->data)
		{
			if (root->leftChild != nullptr)
			{
				insertHelper(data, root->leftChild);
			}
			else
			{
				root->leftChild = new Node<T>(data);
			}
		}
		else
		{
			if (root->rightChild != nullptr)
			{
				insertHelper(data, root->rightChild);
			}
			else
			{
				root->rightChild = new Node<T>(data);
			}
		}
	}
	void simmetricBypassHelper(Node<T>* tree)
	{
		if (tree != nullptr)
		{
			simmetricBypassHelper(tree->leftChild);
			std::cout << tree->data;
			simmetricBypassHelper(tree->rightChild);
		}
	}
	void directBypassHelper(Node<T>* tree)
	{
		if (tree != nullptr)
		{
			std::cout << tree->data;
			directBypassHelper(tree->leftChild);
			directBypassHelper(tree->rightChild);
		}
	}
	void reverseBypassHelper(Node<T>* tree)
	{
		if (tree != nullptr)
		{
			reverseBypassHelper(tree->leftChild);
			reverseBypassHelper(tree->rightChild);
			std::cout << tree->data;
		}
	}
	Node<T>* removeHelper(T data, Node<T>* root)
	{
		if (root == nullptr)
		{
			return root;
		}
		
		if (data == root->data)
		{
			Node<T>* tmp;
			if (root->rightChild == nullptr)
			{
				tmp = root->leftChild;
			}
			else
			{
				Node<T>* ptr = root->rightChild;
				if (ptr->leftChild == nullptr)
				{
					ptr->leftChild = root->leftChild;
					tmp = ptr;
				}
				else
				{
					Node<T>* pmin = ptr->leftChild;
					while (pmin->leftChild != nullptr)
					{
						ptr = pmin;
						pmin = ptr->leftChild;
					}
					ptr->leftChild = pmin->rightChild;
					pmin->leftChild = root->leftChild;
					pmin->rightChild = root->rightChild;
					tmp = pmin;
				}
			}

			delete root;
			return tmp;
		}
		else if (data < root->data)
		{
			root->leftChild = removeHelper(data, root->leftChild);
		}
		else
		{
			root->rightChild = removeHelper(data, root->rightChild);
		}
	}
	
	T searchHelper(T searchData, Node<T>* root)
	{
		if (root->data == searchData)
		{
			return root->data;
		}

		if (root->leftChild != nullptr)
		{
			if (searchHelper(searchData, root->leftChild) == searchData)
			{
				return searchData;
			}
		}
		if (root->rightChild != nullptr)
		{
			if (searchHelper(searchData, root->rightChild) == searchData)
			{
				return searchData;
			}
		}
	}
	void clearHelpler(Node<T>* root)
	{
		if (root != nullptr)
		{
			if (root->leftChild != nullptr)
			{
				clearHelpler(root->leftChild);
			}
			if (root->rightChild != nullptr)
			{
				clearHelpler(root->rightChild);
			}
			delete root;
		}
	}

public:
	BinaryTree();
	~BinaryTree();
	void insert(T);
	void simmetricBypass();
	void directBypass();
	void reverseBypass();
	void remove(T);
	void search(T);
};

#endif
