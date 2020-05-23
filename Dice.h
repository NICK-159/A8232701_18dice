#ifndef DICE_H
#define DICE_H

class Dice
{
public:
	Dice(int *a);  //砞﹚翴计
	int rule();     //耞琌才砏玥
	void setpoint();   //舱
	int getpoint() const;   //眔舱
	void output();      //块蛮よ翴计
private:
	int dice[4];   //翴计
	int time[6] = { 0 };  //计瞷Ω计
	int A;  //舱
};
#endif // !DICE_H
