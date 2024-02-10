#include <iostream>
using namespace std;
void main()
{
	setlocale(0, "");
	//4 вариант

	float z;// z мин значение -123456792.0000000 мах значение 123456792.000000
	unsigned short x, y; // x,y мин значение -32768 максимальное 32367 
	cout << "Введите два катета прямоугольного треугольника\n";
	cin >> x >> y;
	z = sqrt((float)x * x + (float)y * y);
	cout << "Гипотенуза равна\n" << z;
}