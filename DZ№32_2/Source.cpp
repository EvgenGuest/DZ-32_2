#include<iostream>
#include "Functions.h"


using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//Домашнее задание № 29. Задача 2.
	cout << "Задача 2.\nВведите число: ";
	cin >> n;
	cout << func(n) << endl;
	cout << func(123);

	return 0;
}
