#include <iostream>

int main()
{

	system("chcp 1251");

	int hour, day, week;

	do
	{

		std::cout << "������� ���������� ���� = ";
		std::cin >> day;

		std::cout << std::endl;

		week = day / 7;

		day = day % 7;

		std::cout << "�������� ���������� ������ = " << week << std::endl;
		std::cout << "�������� ���������� ���� = " << day << std::endl;

		std::cout << std::endl;

		std::cout << "������������� ���������." << std::endl;

		system("pause");
		system("cls");

	}

	while ("true");

}