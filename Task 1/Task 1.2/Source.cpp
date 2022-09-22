#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>
using namespace std;

/**
* \brief Расчет area по заданной формуле
* \param length Первый аргумент функции
* \param width Второй аргумент функции
* \return значение аrea
*/
double get_area(const double length, const double width);

/**
* \brief Расчет triangle_area по заданной формуле
* \param length Первый аргумент функции
* \param width Второй аргумент функции
* \return значение triangle_area
*/
double get_triangle_area(const double length, const double width);

/**
* \brief Вхождение в программу
* \return Возвращает 0 в случае успеха
*/

int main()
{
	setlocale(LC_ALL, "Rus");
	double length = 0.0;
	double width = 0.0;
	cout << "Введите длину: " << endl;
	cin >> length;
	cout << "Введите ширину: " << endl;
	cin >> width;
	const double area = get_area(length, width);
	const double triangle_area = get_triangle_area(length, width);
	cout << "Площадь прямоугольника равна: " << '\n' << area << '\n' << "Площадь треугольника равна: " << '\n' << triangle_area << endl;

	return 0;
}

double get_area(const double length, const double width) 
{
	double area = length * width;
	return area;
}

double get_triangle_area(const double length, const double width)
{
	double triangle_area = length * width / 2;
	return triangle_area;
}