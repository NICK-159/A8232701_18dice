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
			return false; //���I�Ƥ��b��l�d���
		}
		for (int j = 0; j < 6;j++)
		{
			if (dice[i] == j + 1)
			{
				time[j]++;  //�����I�ƥX�{����
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
			return false;   //���X�{2+1+1��2+2��4���զX��
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
			A = 13;  //��D4���I�ƬۦP�ɡA�̤j�I�Ƭ�12�A�G�ȳ]��13
		}

		else if (time[i] == 2)
		{
			if (i + 1 < p)
			{
				p = i + 1; // ���o�����I�ƬۦP���I��(�̤p�ۦP)
			}
		}
	}
	for (int i = 0; i < 4;i++)
	{
		total = total + dice[i];
	}
	A = (total - 2 * p);  //�L�׬O�_��2+2�զX��2+1+1�զX�A�Ҵ�̤p�ۦP��

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
	cout << A << endl;  //��X�զX�Τj�p
}
