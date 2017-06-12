#include<iostream>

template <typename T, typename U>
auto getMin(const T a, const U b) -> decltype(a + b)
{
	if (a > b)
		return b;
	else
		return a;
}




template<typename T>
T getMax(const T * arr, const T size)
{

	for (size_t i = 0; i < size; ++i)
	{
		if (arr[i] > arr[i + 1])
			return arr[i];
	}
}




template<size_t size, typename T>
T getMax(const T * arr)
{
	for (size_t i = 0; i < size; ++i)
	{
		if (arr[i] > arr[i + 1])
			return arr[i];
	}
}



template<typename T>
void sort( T * A,const T size)
{


	for (int i = 0; i < size - 1; i++)
	{

		int min_i = i;

		for (int j = i + 1; j < size; j++)
		{
			if (A[j] < A[min_i])
			{
				min_i = j;
			}
		}

		int temp = A[i];
		A[i] = A[min_i];
		A[min_i] = temp;
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << A[i] << "  ";
	}
}




template<typename T>
T find(const T * arr, const T size, const T index)
{
	for (size_t i = 0; i < size; ++i)
	{
		if (index != size && size > 0)
			return arr[index];
		else
			return 0;
	}
}





template<typename T>
T solve(T a, T b)
{
	return  b / a;
}

template<typename T>
T solve(T a, T b)
{
	if (a = 0 && b != 0)
		return 
}




int main()
{
	int arr1[] = { 1,5,3,2,4 };
	
	std::cout << getMin(15.5, 16) << "\n";
	std::cout << getMax(arr1, 5)<<"\n";
	std::cout << getMax<5>(arr1)<<"\n";
	sort(arr1, 5);
	std::cout<<std::endl;
	std::cout<<find(arr1, 5, 3)<<"\n";
	std::cout<<solve(1, 5)<<"\n";





	return 0;
}



















