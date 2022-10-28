#include <iostream>
#include <cmath>
using namespace std;

/**
* \brief Рассчитывает значение y
* \param x - аргумент функции
* \return Возвращает значение y 
*/
double getY (double x);

/**
* \brief Определяет параметр табуляции
* \param message - подсказка для пользователя
* \return Параметр табуляции
*/
double getValues(const string& message);

/**
* \brief Функция, определяющая существование функции в данной точке
* \param x - аргумент функции
* \return Возвращает true если существует, false если не существует
*/
bool isExists(double x);

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
		if (isExists(min))
		{
			double y = getY(min);
			cout << "x = " << min << "\n" << "y = " << y << "\n" << endl;
		}
		else
		{
			cout << "Функция не определена" << endl;
			return 1;
		}
	}
	return 0;
}

double getY(double x)
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

bool isExists(double x)
{
	if ((3 + sin(3.6 * x)) != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}