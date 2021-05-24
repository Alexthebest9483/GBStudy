#include <iostream>
#include <locale.h>
#include "mylib.h"

using namespace std;

#define checkRange(a, b) (0 <= a && a < b)

int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b;
	cout << "Введите число проверяемое и число, являющееся верхним порогом проверки" << endl;
	cin >> a >> b;

	if (checkRange(a, b))
		cout << "Входит!";
	else cout << "Не входит!";

	return 0;
}
