#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>

using namespace std;

/**
* \brief Расчет а по заданной формуле
* \param x Первый аргумент функции
* \param y Второй аргумент функции
* \param z Третий аргумент функции
* \return значение а
*/
double get_a(const double x, const double y, const double z);

/**
* \brief Расчет b по заданной формуле
* \param x Первый аргумент функции
* \param y Второй аргумент функции
* \param z Третий аргумент функции
* \return значение b
*/
double get_b(const double x, const double y, const double z);

/**
* \brief Вхождение в программу
* \return Возвращает 0 в случае успеха
*/
int main()
{
	const double x = -4.8;
	const double y = 17.5;
	const double z = 3.2;
	const double a = get_a(x, y, z);
	const double b = get_b(x, y, z);
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout << "z: " << z << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	return 0;
}

double get_a(const double x, const double y, const double z)
{
	return y * z * x * x - (z / sin(x / z) * sin(x / z));
}

double get_b(const double x, const double y, const double z)
{
	return z * exp(-sqrt(z)) * cos(y * x / z);
}