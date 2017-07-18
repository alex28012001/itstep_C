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
	if (size()!=0)
	{
		--list_size;
		node * tmp = head;
		T temp = tmp->data;
		
		head = head->next;
		delete tmp;
		return temp; //!!!

	}
	else 
		throw std::logic_error("Error");

}

template<typename T>
T ForwardList<T>::pop_back()
{
	if (size() != 0)
	{
		node* tmp = tail;
		T data = tmp->data;

		node*ptr = head;
		while (ptr->next != nullptr) {
			if (ptr->next->next == nullptr) {
				ptr->next = nullptr;
				break;
			}
			ptr = ptr->next;
		}
		--list_size;
		tail = ptr;
		delete tmp;
		return data;
	}
	else
		throw std::logic_error("error");
	
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
		
		node* ptr = head;
		node* tmp = ptr;
		while (ptr->next != nullptr)
		{

			if (ptr->data == x)
			{
				--list_size;
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

/*
template <typename T>
bool ForwardList<T>::erase(const T& el) {
	if (size() == 0){
		throw std::logic_error("Error: size = 0");
	}

	node* cur = head;
	node* prev = nullptr;
	while (cur->data != el && cur != nullptr){
		prev = cur;
		cur = cur->next;
	}

	if (cur != nullptr){
		if (prev != nullptr){
			prev->next = cur->next;
		}
		else{
			head = cur->next;
		}
		delete cur;
		--list_size;
		return true;
	}

	return false;
}
*/


template<typename T>
bool ForwardList<T>::insert(const T& x, const T& y)
{
	if (empty())
		return false;

	
		node * ptr = head;
		while (ptr != nullptr)
		{
			if (y == ptr->data)
			{
				++list_size;
				node* tmp = new node;
				tmp->data = x;
				tmp->next = ptr->next;
				ptr->next = tmp;
				if (tmp->next == nullptr)
					tail = tmp;
				return true;
			}
			ptr = ptr->next;
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



