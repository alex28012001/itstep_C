#pragma once
#include<exception>
template <typename T>
class ForwardList {
	struct node {
		T data;
		node* next ;
	};
	node* head;
	node* tail;
	size_t list_size;

public:
	ForwardList() : head(nullptr), tail(nullptr), list_size(0) {};
	~ForwardList() {};

	size_t size() const;
	bool empty() const;

	void push_back(const T&);
	void push_front(const T&);
	bool insert(const T&, const T&);

	T pop_back();
	T pop_front();
	bool erase(const T&) ;

	void print();

private:
	node* create_node(const T&);
	void create_first_node(const T&);
	//node* find_node(const T&);
	//node* find_previous_node(const T&);

};


template<typename T>
size_t ForwardList<T>::size() const
{
	return list_size;
}

template<typename T>
bool ForwardList<T>::empty() const
{
	return size() == 0;
}


template<typename T>
typename ForwardList<T>::node * ForwardList<T>::create_node(const T& x)
{
	node * ptr = new node;
	ptr->data = x;
	ptr->next = nullptr;
	return ptr;

}


template<typename T>
void ForwardList<T>::create_first_node(const T& x)
{
	node* tmp = create_node(x);
	head = tmp;
	tail = tmp;
}


template<typename T>
void ForwardList<T>::push_front(const T& x)
{
	if (empty())
	{
		++list_size;
		create_first_node(x);
	}
		
	else {
		++list_size;
		node * tmp = create_node(x);
		tmp->next = head;
		head = tmp;
	}
	
	
}


template<typename T>
void ForwardList<T>::push_back(const T& x)
{
	if (empty())
	{
		++list_size;
		create_first_node(x);
	}

	else {
		++list_size;
		node * tmp = create_node(x);
		tmp->next = nullptr;
		tail->next = tmp;
		tail = tmp;
	}

	
}





template<typename T>
T ForwardList<T>::pop_front()
{
	if (!empty())
	{
		--list_size;
		node * tmp = head;
		T temp = tmp->data;
		delete tmp;
		head = head->next;
		return temp; //!!!

	}
	else 
		throw std::logic_error("Error");

}


template<typename T>
T ForwardList<T>::pop_back()
{
	if (!empty())
	{
		--list_size;
		node * tmp = tail;
		T temp = tail->data;
		delete tail;
		tail = nullptr;
		return temp; /*!!!!*/
	}
	else
		 throw std::logic_error("Error");
}




template<typename T>
bool ForwardList<T>::erase(const T& x)
{
	if (empty())
	{
		throw std::logic_error("Error");
	}

	else
	{
		--list_size;
		node* ptr = head;
		node* tmp = ptr;
		while (ptr->next != nullptr)
		{

			if (ptr->data == x)
			{
				node* temp = ptr;
				tmp->next = ptr->next;
				delete ptr;
				return true;
			}
			tmp = ptr;
		}
	}
	return false;
}



template<typename T>
bool ForwardList<T>::insert(const T& x, const T& y)
{
	if (empty())
		return false;
	
	else
	{

		++list_size;
		node * pnot = head;
		while (pnot->next != nullptr)
		{
			if (pnot->data == x)
			{
				node * tmp = create_node(y);
				tmp->next = pnot->next;
				pnot->next = tmp;
				return true;
			}
		}
		return false;
	}
	return false;
}






template<typename T>
void ForwardList<T>::print()
{
	if (empty())
	{
		std::cout << "Error";
	}
	else
	{
		node * tmp = head;
		while (tmp != nullptr)
		{
			std::cout << tmp->data << " ";
			tmp = tmp->next;
		}
	}
}



