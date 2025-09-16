#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

int main()
{
	int MyMoney = 1000000;
	int Pay = 2000000;
	int Tax = 10;

	int RealPay = Pay * (100 - Tax) / 100;

	MyMoney += RealPay;

	cout << MyMoney << endl << endl;


	char Char = 'A';
	cout << Char << endl;

	Char = 65;
	cout << Char << endl;

	Char += 32;
	cout << Char << endl;

	int One = 1;
	Char += One;
	cout << Char << endl;

	Char += (char)One;
	cout << Char << endl;

	cout << Char + 1 << endl << Char + (char)1 << endl << (char)(Char + 1) << endl;

	int MaxBit = 256;
	Char += MaxBit;
	cout << "�����÷ο� : " << Char << endl << endl;
	
	_getch();
	system("cls");

	int PlayerX = 0;
	int PlayerY = 0;
	char PlayerShape = '@';

	bool IsAlive = true;
	IsAlive = false;

	bool IsHungry = true;
	
	//branch
	if (IsHungry)
	{
		//�乫�� ����
	}
	else
	{
		//���� �״´�.
	}

	//GameLoop
	//while(true)
	//{
	//Input
	//Process
	//Render
	//}


	//Input();

	//�̵�
	//ó���ϴ�
	//Process();
	PlayerX++;
	PlayerY++;

	//����
	//Render();
	COORD Cur;
	Cur.X = PlayerX;
	Cur.Y = PlayerY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	cout << PlayerShape;
	_getch();
	system("cls");

	PlayerX++;
	Cur.X = PlayerX;
	Cur.Y = PlayerY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	cout << PlayerShape;
	_getch();
	system("cls");

	PlayerY++;
	Cur.X = PlayerX;
	Cur.Y = PlayerY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	cout << PlayerShape;
	_getch();
	system("cls");

	cout << (10 > 9) << endl << (10 < 9) << endl;
	bool bResult = (10 != 9);
	cout << bResult << endl;

	int PlayerHP = 0;
	if (PlayerHP > 0)
	{
		cout << "�����ֳ�" << endl;
	}
	else
	{
		cout << "�� �� ��" << endl;
	}
	_getch();
	system("cls");


	int KeyCode = _getch();
	cout << KeyCode << endl << endl;

	PlayerX = 0;
	PlayerY = 0;
	bool IsRunning = true;

	while (IsRunning)
	{
		KeyCode = _getch();

		if (KeyCode == 'w')
		{
			PlayerY--;
		}
		else if (KeyCode == 's')
		{
			PlayerY++;
		}
		else if (KeyCode == 'a')
		{
			PlayerX--;
		}
		else if (KeyCode == 'd')
		{
			PlayerX++;
		}
		else if (KeyCode == 'q')
		{
			IsRunning = false;
			continue;
		}

		if (PlayerX < 0)
		{
			PlayerX = 0;
		}
		if (PlayerY < 0)
		{
			PlayerY = 0;
		}

		Cur.X = PlayerX;
		Cur.Y = PlayerY;
		system("cls");
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
		cout << PlayerShape;
	}
	_getch();
	system("cls");

	int Item = 0;
	cout << "���� ����" << endl;
	cin >> Item;

	if (Item == 1)
	{
		cout << "��" << endl;
	}
	else if (Item == 2)
	{
		cout << "Į" << endl;
	}
	else if (Item == 3)
	{
		cout << "��������" << endl;
	}
	else
	{
		cout << "�ָ�" << endl;
	}
	_getch();
	system("cls");

	int PlayerInput = 0;

	//1. ����
	//2. �ָ�
	//3. ���ڱ�
	cout << "���������� �Է�" << endl;
	cin >> PlayerInput;

	srand(time(nullptr));
	int EnemyInput = rand() % 3 + 1;
	if (PlayerInput == EnemyInput)
	{
		cout << "���º�" << endl;
	}
	else if (PlayerInput - 1 == EnemyInput || PlayerInput + EnemyInput == 4)
	{
		cout << "�¸�" << endl;
	}
	else if (PlayerInput + 1 == EnemyInput || PlayerInput + EnemyInput == 4)
	{
		cout << "�й�" << endl;
	}
	else
	{
		cout << "����" << endl;
	}
	_getch();
	system("cls");

	//1���� �迭 -> ��ġ ����
	int Map[10][10] = {
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
		{1, 0, 0, 1, 1, 1, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
	};

	int Player[2] = { 1, 1 };

	while (true) {
		KeyCode = _getch();
		if (KeyCode == 'w')
		{
			
			if (Map[Player[1] - 1][Player[0]] != 1)
			{
				Player[1]--;
			}
		}
		else if (KeyCode == 's')
		{
			if (Map[Player[1] + 1][Player[0]] != 1)
			{
				Player[1]++;
			}
		}
		else if (KeyCode == 'a')
		{
			if (Map[Player[1]][Player[0] - 1] != 1)
			{
				Player[0]--;
			}
		}
		else if (KeyCode == 'd')
		{
			if (Map[Player[1]][Player[0] + 1] != 1)
			{
				Player[0]++;
			}
		}

		system("cls");

		//�ι�° ���ȣ�� x��ǥ(������)
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (Player[0] == j && Player[1] == i)
				{
					cout << PlayerShape;
				}
				else if (Map[i][j] == 1) {
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	_getch();
	system("cls");



	return 0;
}