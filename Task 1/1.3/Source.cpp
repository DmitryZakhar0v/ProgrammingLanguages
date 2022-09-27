#include <iostream>
using namespace std;

/**
* \brief Расчет времени нагревания проволоки по заданной формуле
* \param Сопротивление - первый аргумент функции
* \param Сила тока - второй аргумент функции
* \param Количество теплоты - третий аргумент функции
* \return Значение времени нагревания проволоки
*/
const double get_t(const double r, const double i, const double q);

int main()
{
    setlocale(LC_ALL, "Rus");
    double r = 0.0;
    double i = 0.0;
    double q = 0.0;
    cout << "Введите сопротивление проволоки" << endl;
    cin >> r;
    cout << "Введите силу тока" << endl;
    cin >> i;
    cout << "Введите количество теплоты" << endl;
    cin >> q;
    const double t = get_t(r, i, q);
    cout << "Время нагрева проволоки равна: " << '\n' << t << endl;
    return 0;
}
const double get_t(const double r, const double i, const double q)
{
    return q / (i * i * r);
}