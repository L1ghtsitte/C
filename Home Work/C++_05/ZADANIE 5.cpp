#include <iostream>

int main()
{

	system("chcp 1251");

	double money, procent, procent_mon, mounth, free, free2, sum;

	do
	{

		std::cout << " ����� = ";
		std::cin >> money;

		std::cout << " ������� = ";
		std::cin >> procent;

		std::cout << " ���������� ������� = ";
		std::cin >> mounth;

		procent_mon = procent / 12;

		free = money * (procent_mon / 100);

		free2 = free * mounth;

		sum = money + (free * mounth);

		std::cout << " ���� ����� �� ������ = " << sum << std::endl;
		std::cout << " ������ ����� ������������� �� " << free << " ���� " << std::endl;
		std::cout << " �� " << mounth << " ������� �������� " << free2 << " ���� " << std::endl;

		system("pause");
		system("cls");

	}

	while ("true");

}