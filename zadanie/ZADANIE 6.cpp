#include <iostream>


int main()
{

    system("chcp 1251");

    int n;
    int number;
    int min;
    int max;
    int difference;

    std::cout << "������� ���������� �����: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "������������ ���������� �����!" << std::endl;

        return 0;
    }

    std::cout << "������� ����� 1: ";
    std::cin >> number;

    min = number;
    max = number;

    for (int i = 1; i < n; ++i) {
        std::cout << "������� ����� " << i + 1 << ": ";
        std::cin >> number;

        if (number < min) {
            min = number;
        }
        if (number > max) {
            max = number;
        }
    }

    difference = max - min;

    std::cout << "���������� �����: " << min << std::endl;
    std::cout << "���������� �����: " << max << std::endl;
    std::cout << "������� ����� ����: " << difference << std::endl;

}
