#include <iostream>
using namespace std;

/**
* \brief Расчет площади прямоугольника по заданной формуле
* \param длина - первый аргумент функции
* \param ширина - второй аргумент функции
* \return значение площади прямоугольника
*/
const double get_area(const double length, const double width);

/**
* \brief  Расчет площади треугольника по заданной формуле
* \param основание - первый аргумент функции
* \param высота - второй аргумент функции
* \return значение площади треугольника
*/
const double get_triangle_area(const double base_triangle, const double height_triangle);

int main()
{
    setlocale(LC_ALL, "Rus");
    double lenght = 0.0;
    double width = 0.0;
    double base_triangle = 0.0;
    double height_triangle = 0.0;
    cout << "Введите длину" << endl;
    cin >> lenght;
    cout << "Введите ширину" << endl;
    cin >> width;
    cout << "Введите основание треугольника" << endl;
    cin >> base_triangle;
    cout << "Введите высоту треугольника" << endl;
    cin >> height_triangle;
    const double area = get_area(width, lenght);
    const double triangle_area = get_triangle_area(base_triangle, height_triangle);
    cout << "Площадь прямоугольника равна: " << '\n' << area << '\n' << "Площадь треугольника равна: " << '\n' << triangle_area << endl;
    return 0;
}

const double get_area(const double length, const double width)
{
    return length * width;
}

const double get_triangle_area(const double base_triangle, const double height_triangle)
{
    return base_triangle * height_triangle / 2;
}