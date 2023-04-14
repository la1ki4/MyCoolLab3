#ifndef _SINGLY_LINKED_LIST_
#define _SINGLY_LINKED_LIST_
#include "ParticipantOfTheCompetition.hpp"

template<typename T>
class singlyLinkedList
{
	template<typename T>
	class Node
	{
	public:
		T data;
		Node* next;
		Node(T data = T(), Node* next = nullptr)
		{
			this->data = data;
			this->next = next;
		}
	};
	int size;
	Node<T>* head;

public:
	singlyLinkedList();
	~singlyLinkedList();
	int getSize();
	void push_front(T);
	void push_back(T);
	T& operator[](const int);
	void search(T);
	void insert(T, const int);
	void pop_front();
	void removeAt(const int);
	void pop_back();
	void printList();
};


#endif