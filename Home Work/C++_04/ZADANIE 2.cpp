#include <iostream>

int main() 
{

	system("chcp 1251");

	const double pi = 3.14;

	double R = 0;
	double S = 0;
	double L = 0;

	std::cout << "������ ������ = ";
	std::cin >>	R;

	S = pi * R * R;
	L = 2 * pi * R;

	std::cout << "������� ����� = " << S << std::endl;
	std::cout << "������ ���������� = " << L << std::endl;


}