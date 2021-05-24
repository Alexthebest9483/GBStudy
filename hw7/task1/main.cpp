#include <iostream>
#include <locale.h>
#include "mylib.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	const int size = 20;

	float Arr[size];

	MyLib::makeArray(Arr, size);
	MyLib::printArray(Arr, size);
	MyLib::countArray(Arr, size);

	return 0;
}