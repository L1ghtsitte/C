#include <iostream>

int main()
{
	
		system("chcp 1251");

		int second, hour = 0, minute = 0, vibor;
		double hour2 = 0, minute2 = 0;
	do
	{
		std::cout << "� ������ ������� ���� ������ ������� ��������� ������� c����� c���� ��� �������� :\n";
		std::cout << "1. ��� ����������� � �������.\n";
		std::cout << "2. ��� ������ ������� �.\n";

		std::cout << "��� ����� = ";
		std::cin >> vibor;
			

			std::cout << "������� ���������� c����� = ";
			std::cin >> second;

			system("pause");
			system("cls");

			switch (vibor)
			{

			case 1:
			{

				minute = second / 60;

				second = second % 60;

				hour = minute / 60;

				minute = minute % 60;

				std::cout << "���������� �������� c����� = " << second << std::endl;
				std::cout << "���������� �������� ����� = " << minute << std::endl;
				std::cout << "���������� �������� ����� = " << hour << std::endl;

				std::cout << "������������� ���������" << std::endl;

				system("pause");
				system("cls");

				break;

			}

			case 2:
			{

				minute2 = second / 60;

				hour2 = minute2 / 60;

				std::cout << "���������� �������� c����� = " << second << std::endl;
				std::cout << "��� = " << minute2 << " ����� " << std::endl;
				std::cout << "��� = " << hour2 << " ����� " << std::endl;

				std::cout << "������������� ���������" << std::endl;

				system("pause");
				system("cls");

				break;

			}

			default:
			{

				std::cout << "��������� �������� �� ���� ��������� ��������������" << std::endl;

				system("pause");
				system("cls");

				break;

			}

			}

	} 

	while (vibor != 0);

}
