#include "Dice.h"
#include <iostream>
using namespace std;

Dice::Dice(int * a)
{
	for (int i = 0; i < 4;i++)
	{
		dice[i] = a[i];
	}
}

int Dice::rule()
{
	for (int k = 0; k < 6;k++)
	{
		time[k] = 0;
	}
	for (int i = 0; i < 4;i++)
	{
		if (dice[i] > 6 || dice[i] < 1)
		{
			return false; //當點數不在骰子範圍時
		}
		for (int j = 0; j < 6;j++)
		{
			if (dice[i] == j + 1)
			{
				time[j]++;  //取的點數出現次數
			}
		}
	}
	for (int i = 0; i < 6;i++)
	{
		if (time[i] == 2 || time[i] == 4)
		{
			break;
		}
		if (i == 5)
		{
			return false;   //當未出現2+1+1或2+2或4等組合時
		}
	}

	return true;
}

void Dice::setpoint()
{
	int p = 7, total = 0;
	for (int i = 0; i < 6;i++)
	{

		if (time[i] == 4)
		{
			A = 13;  //當非4顆點數相同時，最大點數為12，故暫設為13
		}

		else if (time[i] == 2)
		{
			if (i + 1 < p)
			{
				p = i + 1; // 取得兩顆點數相同的點數(最小相同)
			}
		}
	}
	for (int i = 0; i < 4;i++)
	{
		total = total + dice[i];
	}
	A = (total - 2 * p);  //無論是否為2+2組合或2+1+1組合，皆減掉最小相同值

}

int Dice::getpoint() const
{
	return A;
}

void Dice::output()
{
	for (int i = 0; i < 4;i++)
	{
		cout << dice[i] << " ";
	}
	cout << A << endl;  //輸出組合及大小
}
