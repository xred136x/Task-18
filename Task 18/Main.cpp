// проэкт создан с помощью персонального шаблона
#include<iostream>
using namespace std;

// Задача 1

inline double sum(double num1, double num2, double num3) {
	return (num1 + num2 + num3) / 3;
}

// Задача 2

int max_val(int num1, int num2, int num3) {
	cout << "INT\n";
	return num1 > (num2 > num3 ? num2 : num3) ? num1 : (num2 > num3 ? num2 : num3);
}
double max_val(double num1, double num2, double num3) {
	cout << "DOUBLE\n";
	return num1 > (num2 > num3 ? num2 : num3) ? num1 : (num2 > num3 ? num2 : num3);
}
short max_val(short num1, short num2, short num3) {
	cout << "SHORT\n";
	return num1 > (num2 > num3 ? num2 : num3) ? num1 : (num2 > num3 ? num2 : num3);
}

// Задача 3

template <typename T>
T abs(T arr[], const int len) {
	T min = arr[0];
	for (int i = 0; i < len; i++) 
		if (min > arr[i]) {
			min = arr[i];

		}
		return min;	
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m, c;
	
	// Задача 1

	cout << "Задача 1\n" << "Введите три числа\n";
	cin >> n >> m >> c;
	cout << "Ср.ариф-е = " << sum(n, m, c) << "\n\n";

	// Задача 2

	cout << "Задача 2\n\n";
	cout << max_val(5, 7, 4) << '\n';
	cout << max_val(5.0, 7.4, 4.3) << '\n';
	cout << max_val(short(8), short(3), short(4)) << "\n\n";

	// Задача 3

	const int size = 5;
	int arr1[size]{ 8, 5, 9, 12, 7 };
	cout << abs(arr1, size) << '\n';
	double arr2[size]{ 2.0, 9.5, 2.3, 4.4, 1.9 };
	cout << abs(arr2, size) << '\n';
	return 0;
}