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
			a.dice[i] = rand() % 6 + 1; //讽翴计ぃ才砏玥
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
		if (a.getpoint() == 13) //ㄢ4翴计ゑ耕
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
			cout << "DRAW" << endl;//璝ぃ琌4翴计,碞钡讽キも
		}
	}
	return 0;
}