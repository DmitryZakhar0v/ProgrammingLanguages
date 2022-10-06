#include <iostream>
using namespace std;

/**
* \brief Рассчитывает среднее арифметическое кубов
* \param x первое число
* \param y второе число
* \return Возвращает среднее арифметическое кубов
*/
const double getAverage(const double x, const double y);

/**
* \brief Рассчитывает среднее геометрическое модулей
* \param x первое число
* \param y второе число
* \return Возвращает среднее геометрическое модулей
*/
const double getAverageGeo(const double x, const double y);

enum class userInput
{
	average,
	averageGeo
};

/**
* \brief Точка входа в программу
* \return Возвращает 0 в случае успеха
*/

int main ()
{
	setlocale(LC_ALL, "Rus");
	double x = 0.0;
	double y = 0.0;
	cout << "Введите первое число: " << endl;
	cin >> x;
	cout << "Введите второе число: " << endl;
	cin >> y;
	cout << "Введите номер операции" << '\n'
		<< static_cast <int>(userInput::average) << " " << "Вычисление среднего арифметического кубов" << '\n'
		<< static_cast <int>(userInput::averageGeo) << " " << "Вычисление среднего геометрической модуля" << '\n';
	int input = 0;
	cin >> input;
	const auto choise = static_cast <userInput>(input);
	switch (choise)
	{
	case userInput::average:
		{
		auto average = getAverage(x, y);
		cout << "Среднее арифметическое кубов данных чисел равно: " << '\n' << average << endl;
		break;
		}
	case userInput::averageGeo:
		{
		auto averageGeo = getAverageGeo(x, y);
		cout << "Среднее геометрическое модулей данных чисел равно: " << '\n' << averageGeo << endl;
		break;
		}
	}
	const double average = getAverage(x, y);
	const double averageGeo = getAverageGeo(x, y);
	return 0;
}

const double getAverage(const double x, const double y)
{
	return (pow(x, 3) + pow(y, 3)) / 2;
}

const double getAverageGeo(const double x, const double y)
{
	return sqrt(x * y);
}