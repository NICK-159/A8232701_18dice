#ifndef DICE_H
#define DICE_H
#include <ctime>
#include <cstdlib>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;



class Dice
{
public:
	Dice(); //��l�ƪ����B����
	void random(); //����
	void setDice(); //���l
	string getDice(); //���o�몺��l
	bool tomanynumbers(); //�O�_���ܤ֤@���l����T�Ӥ@��
	int getCouple(); //���o�X���l
	int getPoint(); //�����ثe����
	int getWin(); //�P�_��Ĺ

private:
	int dice[4]; //��l
	int point; //����
	int money; //��?���?
	static int A;

};


#endif // !DICE_H