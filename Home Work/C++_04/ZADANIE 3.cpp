#include <iostream>

int main() 
{

	system("chcp 1251");

	double v = 0 ;	
	double a = 0 ;
	double t = 0 ;
	double S = 0 ;

	std::cout << "������� �������� �������� = ";
	std::cin >> v;	
	std::cout << "������� �������� ��������� = ";
	std::cin >> a;	
	std::cout << "������� ����� = ";
	std::cin >> t;

	S = v * t + (a * t * t) / 2;

	std::cout << "��������� ���� = " << S;


}
