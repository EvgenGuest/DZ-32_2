#include<iostream>
#include "Functions.h"


using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//�������� ������� � 29. ������ 2.
	cout << "������ 2.\n������� �����: ";
	cin >> n;
	cout << func(n) << endl;
	cout << func(123);

	return 0;
}
