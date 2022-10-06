#include <cmath>
#include <iostream>
using namespace std;

/**
* \brief Расчет аrea по заданной формуле
* \param length Первый аргумент функции
* \param width Второй аргумент функции
* \return значение аrea
*/
double get_area(const double length, const double width);

/**
* \brief Расчет triangle_аrea по заданной формуле
* \param a - первая сторона треугольника
* \param b - вторая сторона треугольника
* \param c - третья сторона треугольника
* \return значение treangle_аrea
*/
double get_triangle_area(const double a, const double b, const double c);

int main()
{
    setlocale(LC_ALL, "Rus");
    double lenght = 0.0;
    double width = 0.0;
    cout << "Введите длину" << endl;
    cin >> lenght;
    cout << "Введите ширину" << endl;
    cin >> width;
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    cout << "Введите первую сторону" << endl;
    cin >> a;
    cout << "Введите вторую сторону" << endl;
    cin >> b;
    cout << "Введите третью сторону" << endl;
    cin >> c;
    const double area = get_area(width, lenght);
    const double triangle_area = get_triangle_area(a, b, c);
    cout << "Площадь прямоугольника равна: " << '\t' << area << '\n' << "Площадь треугольника равна: " << '\t' << triangle_area << endl;
    return 0;
}

double get_area(const double length, const double width)
{
    return length * width;
}

double get_triangle_area(const double a, const double b, const double c)
{
    return sqrt(((a + b + c) / 2) * (((a + b + c) / 2) - a) * (((a + b + c) / 2) - b) * (((a + b + c) / 2) - c));
}
