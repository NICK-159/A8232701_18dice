#ifndef DICE_H
#define DICE_H

class Dice
{
public:
	Dice(int *a);  //�]�w�I��
	int rule();     //�P�_�O�_�ŦX�W�h
	void setpoint();   //�զX�j�p
	int getpoint() const;   //���o�զX�j�p
	void output();      //��X�����I��
private:
	int dice[4];   //�I��
	int time[6] = { 0 };  //�Ʀr�X�{������
	int A;  //�զX�j�p
};
#endif // !DICE_H
