#include <iostream>
#include <locale.h>
#include "mylib.h"

using namespace std;

#define checkRange(a, b) (0 <= a && a < b)

int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b;
	cout << "¬ведите число провер€емое и число, €вл€ющеес€ верхним порогом проверки" << endl;
	cin >> a >> b;

	if (checkRange(a, b))
		cout << "¬ходит!";
	else cout << "Ќе входит!";

	return 0;
}