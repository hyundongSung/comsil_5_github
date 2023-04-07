#include "LinkedList.h"

template <typename T>
class Stack : public LinkedList<T>
{
public:
	bool Delete(int &element) override
	{
		if (this->first == 0)
			return false;

		Node<T> *current = this->first;
		Node<T> *next = current->link;

		element = current->data;
		delete current;

		this->first = next;
		this->current_size--;
		return true;
	}
};
