#include <iostream>
#include "Dice.h"
using namespace std;


int main() {
	/*	string n;
		cin >> n; //輸入就開始
	*/
	Dice A;
	Dice player;
	int TWD  ;
	string n,n1,Switch;

	string sa = "十八仔遊戲";
	sa = "title " + sa;
	system(sa.c_str());

	while (1) {
		system("color 3");
		cout << "案任意鍵開始遊戲 (按０退出)：";
		cin >> Switch;

		if (Switch == "0") break;
		system("CLS");

		cout << "請輸入下賭金額：";
		cin >> TWD;
		cout << "---------------------------------" << endl;
		
		A.setDice();
		cout << "莊家骰子： " << A.getDice() << endl;
		cout << "莊家點數： " << A.getPoint() << endl;


		cout << "請輸入任意鍵：";
		cin >> n; //輸入就輸出玩家骰子
		system("CLS");
	
		cout << "下賭金額：" << TWD << endl;
		cout << "---------------------------------" << endl;
	
		A.print();
	
		player.setDice();
		cout << "---------------------------------" << endl;
		cout << "玩家骰子： " << player.getDice() << endl;
		cout << "玩家點數： " << player.getPoint() << endl;
		cout << "---------------------------------" << endl;

		player.getwin(A.getPoint(), player.getPoint() , TWD);
		cout << "---------------------------------" << endl;
		

	}
	
}