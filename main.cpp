#include <iostream>
#include "Dice.h"
using namespace std;


int main() {
	/*	string n;
		cin >> n; //��J�N�}�l
	*/
	Dice A;
	Dice player;
	int TWD  ;
	string n,n1,Switch;

	string sa = "�Q�K�J�C��";
	sa = "title " + sa;
	system(sa.c_str());

	while (1) {
		system("color 3");
		cout << "�ץ��N��}�l�C�� (�����h�X)�G";
		cin >> Switch;

		if (Switch == "0") break;
		system("CLS");

		cout << "�п�J�U����B�G";
		cin >> TWD;
		cout << "---------------------------------" << endl;
		
		A.setDice();
		cout << "���a��l�G " << A.getDice() << endl;
		cout << "���a�I�ơG " << A.getPoint() << endl;


		cout << "�п�J���N��G";
		cin >> n; //��J�N��X���a��l
		system("CLS");
	
		cout << "�U����B�G" << TWD << endl;
		cout << "---------------------------------" << endl;
	
		A.print();
	
		player.setDice();
		cout << "---------------------------------" << endl;
		cout << "���a��l�G " << player.getDice() << endl;
		cout << "���a�I�ơG " << player.getPoint() << endl;
		cout << "---------------------------------" << endl;

		player.getwin(A.getPoint(), player.getPoint() , TWD);
		cout << "---------------------------------" << endl;
		

	}
	
}