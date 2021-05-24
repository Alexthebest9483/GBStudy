#include <iostream>

namespace MyLib
{
	void makeArray(float Arr[], int size)
	{
		for (size_t i = 0; i < size; ++i)
			Arr[i] = float (rand() % 100 / 3.0 - 30.0);
	}

	void printArray(float Arr[], int size)
	{
		for (size_t i = 0; i < size; ++i)
			std::cout << Arr[i] << " ";
		std::cout << std::endl;
	}

	void countArray(float Arr[], int size)
	{
		int pos = 0, neg = 0;
		for (size_t i = 0; i < size; ++i) {
			if (Arr[i] > 0)
				pos++;
			else if (Arr[i] < 0)
				neg++;
		}
		std::cout << "Positive: " << pos << " Negative: " << neg << std::endl;
	}
}