#include <iostream>

int main()
{

	system("chcp 1251");

	int sec, time2;
	double time1, dist, speed, T;

	do
	{

		std::cout << " ������� ����� ��c������ (� ������) = ";
		std::cin >> dist;

		if (dist >= 0)
		{

			std::cout << " ������� ����� (���.c��) = ";
			std::cin >> time1;

			if (time1 >= 0)
			{

				std::cout << " ��c������ = " << dist << std::endl;

				time2 = time1;

				sec = time1;

				sec = (time1 - time2) * 100;

				T = (time2 * 60) + sec;

				speed = dist / T;

				std::cout << " ����� = " << time2 << " ����� " << sec << " c�� = " << T << " c��. " << std::endl;
				std::cout << " C����c�� = " << speed << "�/�" << std::endl;

				speed = speed * 3.6;

				std::cout << " C����c�� = " << speed << "��/�" << std::endl;

				system("pause");
				system("cls");

			}

			if (time1 < 0)
			{

				std::cout << " ��� ���� ����� � �������� ������ �� �����?" << std::endl;

				system("pause");
				system("cls");

			}

		}

		if (dist < 0)
		{

			std::cout << " ����� ������ ����� ����������� ����������� �� ������� ������ ���� ��....... " << std::endl;

			system("pause");
			system("cls");

		}

	}

	while ("true");

}