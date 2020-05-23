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
			a.dice[i] = rand() % 6 + 1; //���I�Ƥ��ŦX�W�h��
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
		if (a.getpoint() == 13) //��̬Ҭ�4���I�ƬۦP�A����j�p
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
			cout << "DRAW" << endl;//�Y���O4���I�ƬۦP��,�N��������
		}
	}
	return 0;
}