#include<iostream>
int main()
{	// 2 �������
	setlocale(0, "");
	unsigned short x = 7; //7 = 00000111
	//short x = 98; // 98 = 01100010
	//short x = 241; // 241 = 11110001
	unsigned short i;
	unsigned short s = x;
	std::cout << "������� ��� " << std::endl;
	std::cin >> i;
	x |= (1 << i);
	std::cout << " ����� �� �������������� " << s << std::endl;
	std::cout << " ����� ����� �������������� " << x << std::endl;

	return 0;
}