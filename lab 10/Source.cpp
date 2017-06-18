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
	T tmp = arr[0];
	for (size_t i = 0; i < size; ++i)
	{
		if (arr[i] > tmp)
			tmp = arr[i];
	}
	return tmp;
}




template<size_t size, typename T>
T getMax(const T * arr)
{
	T tmp = arr[0];
	for (size_t i = 0; i < size; ++i)
	{
		if (arr[i] > tmp)
			tmp = arr[i];
	}
	return tmp;
}



template<typename T>
void sort(T * A, const T size)
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
T find(const T * arr, const T size, const T value)
{
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == value)
			return i;

	}
	std::cout << "Number not found!!" << std::endl;
	return 0;
		
}






template<typename T, typename U>
T* solve(T a, U b)
{
	T d[2];
	if (a == 0)
	{
		d[0] = 0;
		return d;
	}

	d[0] = 1;
	d[1] = ((b*-1) / a);
	return d;

}






int main()
{
	int arr1[] = { 25,86,23,547,236 };

	std::cout <<"getMin : "<< getMin(15.5, 16) << "\n";
	std::cout <<"getMax : "<< getMax(arr1, 5) << "\n";
	std::cout <<"getMax(2) : "<< getMax<5>(arr1) << "\n";
	std::cout << "Sort : ";
	sort(arr1, 5);
	std::cout << std::endl;
	std::cout <<"Find : "<< find(arr1, 5, 547) << "\n";


	//Solve
	auto * arr2 = solve(0, 10);
	if (arr2[0] == 0)
		std::cout << "OK\n";
	else
		std::cout << "Error!\n";

	arr2 = solve(10, 10);
	if (arr2[1] == -1)
		std::cout << "OK\n";
	else
		std::cout << "Error\n";

	
	



	return 0;
}
