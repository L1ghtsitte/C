#include <iostream>
#include <string>

int main()
{

	system("chcp 1251");

	int vibor1 = 0;
	int i = 0;

	do
	{
	std::cout << "1. �����������\n";
	std::cout << "2. ��������� ������\n";
	std::cout << "3. ��������� ����� �������\n";
	std::cout << "4. ����������� ������\n";
	std::cout << "0. Exit\n";

	std::cout << "��� ����� = ";
	std::cin >> vibor1;

	system("cls");

	if (vibor1 == 1)
	{

		int vibor2;
		double num1;
		double num2;
		double sum;


		std::cout << "1. �����������" << std::endl;

		std::cout << "������� ������ �����" << std::endl;
		std::cin >> num1;
		std::cout << "������� ������ �����" << std::endl;
		std::cin >> num2;

		system("cls");

		std::cout << "�������� ��������" << std::endl;
		std::cout << "1. �����" << std::endl;
		std::cout << "2. ������������" << std::endl;
		std::cout << "3. �������� ������� ����� �� ������" << std::endl;
		std::cout << "4. �������� ������� ����� � ������" << std::endl;
		std::cout << "5. ������ �� ������� �� �������" << std::endl;
		std::cout << "6. ������ �� ������� � �������" << std::endl;

		std::cout << "��� ����� = ";
		std::cin >> vibor2;
		if (vibor2 == 1)
		{

			sum = num1 + num2;

			std::cout << "����� ����� = " << sum << std::endl;

		}
		if (vibor2 == 2)
		{

			sum = num1 * num2;

			std::cout << "������������ ����� = " << sum << std::endl;

		}
		if (vibor2 == 3)
		{

			sum = num1 - num2;

			std::cout << "�������� ������� ����� �� ������ = " << sum << std::endl;

		}
		if (vibor2 == 4)
		{

			sum = num2 - num1;

			std::cout << "�������� ������� ����� � ������ = " << sum << std::endl;

		}
		if (vibor2 == 5)
		{

			sum = num1 / num2;

			std::cout << "������ �� ������� �� ������� = " << sum << std::endl;

		}
		if (vibor2 == 1)
		{

			sum = num2 / num1;

			std::cout << "������ �� ������� � ������� = " << sum << std::endl;

		}

	}

	if (vibor1 == 2)
	{

		double num1;

		std::cout << "2. ��������� ������" << std::endl;

		std::cout << "������� ����� ������ �������� ��� ��������� - ";
		std::cin >> num1;

		if (num1 < 0)
		{

			double num2;

			num2 = num1 * (-1);

			std::cout << "������ ��������� ����� = " << num2 << std::endl;

		}

		if (num1 >= 0)
		{

			double num2;

			num2 = num1;

			std::cout << "������ ��������� ����� = " << num2 << std::endl;

		}

	}

	if (vibor1 == 3)
	{

		double num1;
		double num2;
		double mod1;
		double mod2;
		double sumMod;

		std::cout << "3. ��������� ����� �������" << std::endl;

		std::cout << "������� ������ ����� - ";
		std::cin >> num1;
		std::cout << "������� ������ ����� - ";
		std::cin >> num2;

		system("cls");

		if (num1 < 0)
		{

			mod1 = num1 * (-1);

			std::cout << "������ ������� ����� = " << mod1 << std::endl;

		}

		if (num1 >= 0)
		{

			mod1 = num1;

			std::cout << "������ ������� ����� = " << mod1 << std::endl;

		}

		if (num2 < 0)
		{

			mod2 = num2 * (-1);

			std::cout << "������ ������� ����� = " << mod2 << std::endl;

		}

		if (num2 >= 0)
		{

			mod2 = num2;

			std::cout << "������ ������� ����� = " << mod2 << std::endl;


		}

		sumMod = mod1 + mod2;

		std::cout << "����� ������� = " << sumMod << std::endl;
	}

	if (vibor1 == 4)
	{
		std::string text;
		int num1;


		std::cout << "4. ����������� ������" << std::endl;

		std::cout << "������� ��� ����� - ";

		std::cin >> text;

		std::cout << "������� ���������� ��������� - ";

		std::cin >> num1;

		system("cls");

		while (i < num1)
		{
			i = i + 1;

			std::cout << i << ". " << text << std::endl;


		}

			system("pause");

	}
	}
	while (vibor1 != 0);
}

