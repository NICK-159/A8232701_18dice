#include "Dice.h"
#include <iostream> 
#include <ctime>
#include <cmath>
using namespace std;

int main() {

	int x[4], y[4];
	srand(time(0));
	for (int i = 0; i < 4;i++)
	{
		x[i] = rand() % 6 + 1;
	}
	for (int j = 0; j < 4;j++)
	{
		y[j] = rand() % 6 + 1;
	}

	Dice a(x);
	while (a.rule() == false)
	{
		for (int i = 0; i < 4;i++)
		{
			a.dice[i] = rand() % 6 + 1; //當點數不符合規則時
		}
	}
	a.setpoint();
	a.output();

	Dice b(y);
	while (b.rule() == false)
	{
		for (int j = 0; j < 4;j++)
		{
			b.dice[j] = rand() % 6 + 1;
		}
	}
	b.setpoint();
	b.output();
	if (a.getpoint() > b.getpoint())
	{
		cout << "WIN" << endl;
	}
	else if (a.getpoint() < b.getpoint())
	{
		cout << "LOSE" << endl;
	}
	else if (a.getpoint() == b.getpoint())
	{
		if (a.getpoint() == 13) //兩者皆為4個點數相同，比較大小
		{
			if (x[0] > y[0])
			{
				cout << "WIN" << endl;
			}
			else if (x[0] < y[0])
			{
				cout << "LOSE" << endl;
			}
			else
			{
				cout << "DRAW" << endl;
			}
		}
		else
		{
			cout << "DRAW" << endl;//若不是4個點數相同時,就直接當平手
		}
	}
	return 0;
}