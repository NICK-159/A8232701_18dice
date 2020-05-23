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
	Dice(); //初始化金錢、分數
	void random(); //打亂
	void setDice(); //骰骰子
	string getDice(); //取得骰的骰子
	bool tomanynumbers(); //是否有至少一對骰子不能三個一樣
	int getCouple(); //取得幾對骰子
	int getPoint(); //取的目前分數
	void getwin(int, int , int); //判斷誰贏
	void print();
	void setName(string);//設定玩家名
	string getName();//取得玩家名
	
	static int A;
private:
	int dice[4]; //骰子
	int point; //分數
	string name;//玩家名
};


#endif // !DICE_H