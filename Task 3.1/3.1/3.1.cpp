#include <iostream>
#include <cmath>
using namespace std;

/**
* \brief Рассчитывает значение y
* \param x - аргумент функции
* \return Возвращает значение y 
*/
double getY (const double x);

/**
* \brief Определяет параметр табуляции
* \param message - подсказка для пользователя
* \return Параметр табуляции
*/
double getValues(const string& message);

/**
* \brief Точка входа в программу
* \return Возвращает 0 в случае успеха
*/

int main()
{
	setlocale(LC_ALL, "Rus");
	const double step = getValues ("Введите шаг табуляции");
	double min = getValues("Введите минимальное значение х");
	const double max = getValues("Введите максимальное значение х");
	
	for (min; min <= max; min += step)
	{
		double y = getY(min);
		cout << "x = " << min << "\n" << "y = " << y << "\n" << endl;
	}
	return 0;
}

double getY(const double x)
{
	return (x - ((1) / (3 + sin(3.6 * x))));
}

double getValues(const string& message)
{
	cout << message << endl;
	double value = 0.0;
	cin >> value;
	return value;
}