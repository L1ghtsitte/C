#include <iostream>

int main()
{

	system ("chcp 1251");

	float x;
	float t;
	float g;
	//double k;

	std::cout << "������ ����� = ";
	std::cin >> x;
	std::cout << "������ ����� = ";
	std::cin >> t;
	std::cout << "������ ����� = ";
	std::cin >> g;


	float k = (x/2 + 3*t - 2*g) - t*t ;

	std::cout << "��������� = " << k;



	return 0;



}