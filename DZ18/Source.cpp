#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>



using namespace std;



inline int meanValue(int num1, int num2);
int maxNum(int num1, int num2, int num3);
float maxNum(float num1, float num2, float num3);
double maxNum(double num1, double num2, double num3);
template <typename T> T maxEl(T Arr[], int length);
template <typename T> void showArr(T array[], int length);


int main() {
	setlocale(LC_ALL, "Russian");
	int a, b;


	//задача 1
	cout << "Задача 1\nВведите два числа: ";
	cin >> a >> b;
	cout << "Среднее арифметическое этих чисел = " << meanValue(a, b) << endl;

	//Задача 2
	cout << "Задача 2\n";
	cout << "Тип int " << maxNum(7, 99, -6) << endl;
	cout << "Тип float " << maxNum(0.3f, 2.7f, 8.9f) << endl;
	cout << "Тип double " << maxNum(23.4, 45.9, 121.55) << endl;

	//Задача 3
	cout << "Задача 3\n";
	float Arr[6] = { 1.5, -2.2, 45.1, 3, -15, 0.1 };
	showArr(Arr, 5);
	cout << "Максимальный элемент массива: " << maxEl(Arr, 6) << endl;
	int Arr2[5] = { 1, 55, -7, 100, 250 };
	showArr(Arr2, 5);
	cout << "Максимальный элемент массива: " << maxEl(Arr2, 5) << endl;



	return 0;
}


//задача 1
inline int meanValue(int num1, int num2) {
	return (num1 + num2) / 2;
}


//Задача 2
int maxNum(int num1, int num2, int num3) {
	if (num1 > num2 && num1 > num3)
		return num1;
	if (num2 > num1 && num2 > num3)
		return num2;
	if (num3 > num1 && num3 > num2)
		return num3;
}

float maxNum(float num1, float num2, float num3) {
	if (num1 > num2 && num1 > num3)
		return num1;
	if (num2 > num1 && num2 > num3)
		return num2;
	if (num3 > num1 && num3 > num2)
		return num3;
}

double maxNum(double num1, double num2, double num3) {
	if (num1 > num2 && num1 > num3)
		return num1;
	if (num2 > num1 && num2 > num3)
		return num2;
	if (num3 > num1 && num3 > num2)
		return num3;
}

template <typename T> T maxEl(T Arr[], int length) {
	T max = 0;
	for (int i = 0; i < length; i++)
		if (Arr[i] > max)
			max = Arr[i];
	return max;
}

template <typename T> void showArr(T array[], int length) {
	cout << "Изначальный массив:\n[";
	for (int i = 0; i < length; i++)
		cout << array[i] << ", ";
	cout << "\b\b]\n";
}