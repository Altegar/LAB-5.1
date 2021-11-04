// LAB-5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Lab_05_1.cpp
// Сушинський Ігор
// Лабораторна робота № 5.1
// Функції, що містять арифметичний вираз.
// Варіант 18

#include <iostream>
#include <cmath>

using namespace std;

double g(const double x, const double y); // прототип

int main()
{
	double r, s;

	cout << "r = "; cin >> r;
	cout << "s = "; cin >> s;

	double c = (pow(g(r, s * s + 1), 2) * g(r, s * s + 1) + g(1, r * r + s)) / (1 + pow(g(1, r * s), 2) * g(1, r * s));

	cout << "c = " << c << endl;

	return 0;
}

double g(const double x, const double y) // визначення
{
	return ((sin(x) * sin(x) + cos(y) * cos(y)) / (1 + abs(x * y)));
}