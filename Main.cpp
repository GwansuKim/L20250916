#include <iostream>

using namespace std;

int main()
{
	int MyMoney = 1000000;
	int Pay = 2000000;
	int Tax = 10;

	int RealPay = Pay * (100 - Tax) / 100;

	MyMoney += RealPay;

	cout << MyMoney;

	return 0;
}