#include <iostream>

int main() 
{

    system("chcp 1251");

    int start = 0;
    int end = 0;

    std::cout << "������� ��������� �����: ";
    std::cin >> start;
    std::cout << "������� �������� �����: ";
    std::cin >> end;

    if (start > end) 
    {
        std::cout << "������: ��������� ����� ������ ���������." << std::endl;

    }

    if (start < end)
    {
        std::cout << "����� ������ ����������" << std::endl;

    }

    int sum = 0;

    std::cout << "��� ����� ����� �� " << start << " �� " << end << " ������������:" << std::endl;

    for (int i = start; i <= end; ++i) 
    {
        std::cout << i << "\n";
        sum += i;
    }
    std::cout << std::endl;
    std::cout << "����� ���� �����: " << sum << std::endl;

}