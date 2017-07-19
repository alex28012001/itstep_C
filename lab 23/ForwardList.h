#pragma once
#include<exception>
template <typename T>
class ForwardList 
{
	struct node {
		T data;
		node* next;
	};
	node* head;
	node* tail;
	size_t list_size;

public:
	ForwardList() : head(nullptr), tail(nullptr), list_size(0) {};
	~ForwardList();

	ForwardList(ForwardList  const &) = delete;
	ForwardList & operator=(ForwardList  const &) = delete;

	size_t size() const;
	bool empty() const;

	void push_back(const T&);
	void push_front(const T&);
	bool insert(const T&, const T&);

	T pop_back();
	T pop_front();
	bool erase(const T&);

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
	else 
	{
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
		if (empty()) 
			throw  std::logic_error("Empty");
		
		node* tmp = head;
		T data = tmp->data;
		head = head->next;
		--list_size;

		if (size() == 0) {
			head = tail = nullptr;
		}

		delete tmp;
		return data;

}

template<typename T>
T ForwardList<T>::pop_back()
{


	if (size() == 0) 
		throw std::logic_error("Empty");


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

	if (size() == 0) {
		head = tail = nullptr;
	}

	delete tmp;
	return data;
}




template<typename T>
bool ForwardList<T>::erase(const T& x)
{
	if (size() == 0) 
		throw std::logic_error("Empty");

	node* ptr = head;
	node* tmp = nullptr;
	while (ptr->data != x && ptr != nullptr) {
		tmp = ptr;
		ptr = ptr->next;
	}

	if (ptr != nullptr) {
		if (tmp != nullptr) {
			tmp->next = ptr->next;
		}
		else {
			head = ptr->next;
		}
		if (ptr->next == nullptr && tmp != nullptr) {
			tail = tmp;
		}
		delete ptr;
		--list_size;

		if (size() == 0) {
			head = tail = nullptr;
		}

		return true;
	}

	return false;

}




template<typename T>
bool ForwardList<T>::insert(const T& x, const T& y)
{
	if (empty())
		return false;


	node * ptr = head;
	while (ptr != nullptr)
	{
		if (ptr->data == y)
		{
			++list_size;
			node* tmp = new node;
			tmp->data = x;
			tmp->next = ptr->next;
			ptr->next = tmp;
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
		std::cout << "Empty";
	
		node * tmp = head;
		while (tmp != nullptr)
		{
			std::cout << tmp->data << " ";
			tmp = tmp->next;
		}
		std::cout << std::endl;
}


template <typename T>
ForwardList<T>::~ForwardList() 
{
	while (head) {
		pop_front();
	}
}


