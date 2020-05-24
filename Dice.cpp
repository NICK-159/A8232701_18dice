#include "Dice.h"

int Dice::A = 0;
Dice::Dice() {
	point = 0;
	A++;
}
void Dice::random() {

	int c;
	srand(time(0) + A);
	for (int i = 0; i < 4; i++) {
		dice[i] = rand() % 6 + 1;
	}
	while (tomanynumbers())
	{
		for (int i = 0; i < 4; i++) {
			dice[i] = rand() % 6 + 1;
		}
	}
}
void Dice::setDice() {
	random();
}
string Dice::getDice() {
	stringstream a;
	for (int i = 0; i < 4; i++) {
		a << dice[i] << " ";
	}
	return a.str();
}
bool Dice::tomanynumbers() {
	int tot;
	for (int i = 0; i < 3; i++) {
		tot = 0;
		for (int j = i + 1; j < 4; j++) {
			if (dice[i] == dice[j]) {
				tot++;
				if (tot > 1) {
					return 1;
				}
			}
		}
	}
	if (tot == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int Dice::getCouple() {
	int tot = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 4; j++) {
			if (dice[i] == dice[j]) {
				tot++;
			}
		}
	}
	return tot;
}
int Dice::getPoint() {
	int point = 0;
	int tot, max = 0;
	for (int i = 0; i < 3; i++) {
		tot = 0;
		for (int j = i + 1; j < 4; j++) {
			if (dice[i] == dice[j]) {
				tot++;
			}
		}
		if (max < dice[i])
			max = dice[i];

		if (tot == 0) {
			point += dice[i];

		}
		else if (getCouple() == 2) {
			point = 2 * max;
		}
	}
	return point;
}

void Dice::getwin(int a, int b, int c) {
	int tot = 0;
	tot += c;
	if (a == 12) {
		tot -= c;
		cout << "莊家贏了" << endl;
		cout << getName() << " ";
		cout << "目前香腸數" << tot << endl;
	}
	else if (a == b) {
		cout << "平手" << endl;
		cout << getName() << " ";
		cout << "目前香腸數：" << tot << endl;
	}
		
	else if (a > b) {
		if (a == 3) {
			tot += c;
			cout << "玩家贏了"  << endl;
			cout << getName() << " ";
			cout << "目前香腸數：" << tot << endl;;
		}
		else {
			tot -= c;
			cout << "莊家贏了" << endl;
			cout << getName() << " ";
			cout << "目前香腸數：" << tot << endl;
		}
			
	}

	else if (a < b) {
		if (b == 3){
			tot -= c;
			cout << "莊家贏了" << endl;
			cout << getName() <<" ";
			cout << "目前香腸數：" << tot << endl;
		}
		else{
			tot += c;
			cout << "玩家贏了 " << endl;
			cout << getName() << " ";
			cout << "目前香腸數：" << tot << endl;;
		}
	}
}


void Dice::print() {
	cout << "莊家骰子： " << getDice() << endl;
	cout << "莊家點數： " << getPoint() << endl;
}

void Dice::setName(string newname)
{
	name = newname;
}

string Dice::getName()
{
	return name;
}