//��������� Game Stats 1.0;
//������������� ���������� � ������������� ����������;

#include <iostream>

using namespace std;

int main()
{
	int fuel;
	int score;
	double distance;
	double engineTemp;
	char playAgain;
	bool shieldsUp;
	short lives, aliensKilled;

	score = 0;
	distance = 1200.76;
	engineTemp = 6572.89;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;


	cout << "\n Score = " << score << endl;
	cout << " Distance = " << distance << endl;
	cout << " PlayAgain = " << playAgain << endl;

	//���������� shieldsUp, ��������� ������� ��������, ��� �������� �� ���������;

	cout << " Lives = " << lives << endl;
	cout << " AliensKilled = " << aliensKilled << endl;
	cout << " EngineTemp = " << engineTemp << endl;

	cout << "\n How much fuel?" << endl;
	cout << ' ';
	cin >> fuel;
	cout << " Fuel = " << fuel << endl;

	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "\n Ushort = " << bonus << endl;

	return 0;
}