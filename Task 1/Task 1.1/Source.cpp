#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>

using namespace std;

/**
* \brief ������ � �� �������� �������
* \param x ������ �������� �������
* \param y ������ �������� �������
* \param z ������ �������� �������
* \return �������� �
*/
double get_a(const double x, const double y, const double z);

/**
* \brief ������ b �� �������� �������
* \param x ������ �������� �������
* \param y ������ �������� �������
* \param z ������ �������� �������
* \return �������� b
*/
double get_b(const double x, const double y, const double z);

/**
* \brief ��������� � ���������
* \return ���������� 0 � ������ ������
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
	return z * pow(M_E, -sqrt(z)) * cos(y * x / z);
}