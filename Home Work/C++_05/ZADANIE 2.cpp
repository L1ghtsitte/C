#include <iostream>

int main()
{



	system("chcp 1251");

	int cent, dolor;
	double money; 

	do
	{

		std::cout << "C������ � ��� ����� = ";
		std::cin >> money;

		dolor = money;

		cent = (money - dolor) * 100;

		std::cout << dolor << " �������� � " << cent << " ������. ";

		system("pause");
		system("cls");

		}

	while ("true");

}