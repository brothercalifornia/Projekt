#include <iostream>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include<string>

using namespace std;

class Game {

public:
	char com; //uzywane jako komenda
	string pName;
	bool dowodcaB = false, zbirB = false, niszczycielB = false, gamePlayerB = false;

	int jog, ejog;
	int t1, t2, t3;
	int et1, et2, et3;
	int hp, ehp;


	void menu();
	void playerCreator();
	void inGameMenu();
	void classChose();
	void game();
	void SI();
	void gamePlayer();
	
	
	



	
};
