#include <iostream>

int main()
{

	system ("chcp 1251");

	double num1;
	double num2;
	double mod1;
	double mod2;
	double modsum;


	std::cout << "������ ����� = ";
	std::cin >> num1;
	std::cout << "������ ����� = ";
	std::cin >> num2;

	if (num1 < 0)
	{

		std::cout << "������ 1 ����� = ";
		mod1 = num1 * -1;
		std::cout << mod1;
		std::cout << "\n";

	}

	else 
	{

		std::cout << "������ 1 ����� = ";
		mod1 = num1;
		std::cout << mod1;
		std::cout << "\n";

	}

	if (num2 < 0)
	{

		std::cout << "������ 2 ����� = ";
		mod2 = num2 * -1;
		std::cout << mod2;
		std::cout << "\n";

	}

	else 
	{

		std::cout << "������ 2 ����� = ";
		mod2 = num2;
		std::cout << mod2;
		std::cout << "\n";

	}

	std::cout << "����� ������� = " << mod1  +  mod2 << std::endl;

	modsum = num1 + num2;

	if (modsum < 0)
	{
		modsum = modsum * (-1);

	}

	else
	{

		modsum = modsum;

	}

	std::cout << "������ ����� = " << modsum << std::endl;

	return 0;

}