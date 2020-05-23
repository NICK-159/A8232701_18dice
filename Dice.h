#ifndef DICE_H
#define DICE_H
#include <ctime>
#include <cstdlib>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

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
	void getwin(int, int , int); //�P�_��Ĺ
	void print();
	void setName(string);//�]�w���a�W
	string getName();//���o���a�W
	
	static int A;
private:
	int dice[4]; //��l
	int point; //����
	string name;//���a�W
};


#endif // !DICE_H