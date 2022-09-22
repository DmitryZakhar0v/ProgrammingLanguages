#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>
using namespace std;

/**
* \brief Расчет аrea по заданной формуле
* \param length Первый аргумент функции
* \param width Второй аргумент функции
* \return значение аrea
*/
const double get_area(const double length, const double width);

/**
* \brief Расчет triangle_аrea по заданной формуле
* \param length Первый аргумент функции
* \param width Второй аргумент функции
* \return значение treangle_аrea
*/
const double get_triangle_area(const double length, const double width);

int main()
{
    setlocale(LC_ALL, "Rus");
    double lenght = 0.0;
    double width = 0.0;
    cout << "Введите длину" << endl;
    cin >> lenght;
    cout << "Введите ширину" << endl;
    cin >> width;
    const double area = get_area(width, lenght);
    const double triangle_area = get_triangle_area(width, lenght);
    cout << "Площадь прямоугольника равна: " << '\t' << area << '\n' << "Площадь треугольника равна: " << '\t' << triangle_area << endl;
    return 0;
}

const double get_area(const double length, const double width)
{
    return length * width;
}

const double get_triangle_area(const double length, const double width)
{
    return length * width / 2;
}