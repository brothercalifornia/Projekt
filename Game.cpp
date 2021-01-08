#include "Game.h"

void Game::menu() {
	
	system("cls");
	cout << "1.Start gry" << endl;
	cout << "2.Wyjście z gry" << endl;
	cin >> com;
	inGameMenu();

	switch (com) {
	case '1':
		playerCreator();
		break;
	case '2':
		exit(0);
		break;

	default :
		cout << "Nie ma takiej opcji" << endl; Sleep(3000);
		menu();
		break;
	}
}


 void Game::playerCreator() 
 {

	 cout << "Podaj imie" << endl;
	 cin >> pName;
}

 void Game::inGameMenu()
 {
	 system("cls");
	 cout << "1.Zacznij gre z innym graczem" << endl;
	 cout << "2.Zacznij gre z komputerem" << endl;
	 cout << "3.Powroc do menu" << endl;
	 cin >> com;
	 switch (com) {
	 case '1': 
		 classChose();
		 gamePlayerB = true;
		 break;
		
	 case '2':
		 classChose();
		 gamePlayerB = false; 

		 break;

	 case '3':
		 inGameMenu();
		 break;

		 default: 
			 inGameMenu();
			 break;
	 }
 }

 void Game::classChose()
 {
	 cout << "1.Dowódca" << endl;
	 cout << "2.Zbir" << endl;
	 cout << "3.Niszczyciel" << endl;
	 cin >> com;

	 switch (com) {
	 case '1':
		 dowodcaB = true;
		 break;

	 case '2':
		 zbirB = true;
		 break;

	 case '3':
		 niszczycielB = true;
		 break;

	 default:
		 cout << "Nie ma takiej opcji" << endl; Sleep(3000);
		 classChose();
		 break;

	 }

	 if (gamePlayerB == true) {
		 gamePlayer();
	 }

	 else {
		 game();
		 jog = 9;
		 ejog = 9;

		 t1 = 3;
		 t2 = 3;
		 t3 = 3;

		 et1 = 3;
		 et2 = 3;
		 et3 = 3;

		 hp = 10;
		 ehp = 10;

	 }

 }

 void Game::game()
 {
	 cout << " GRACZ:"<<endl<< "Stan ogolny:" << jog << endl;
	 cout << "TIER:1" << t1 << "2" << t2 << "3" << t3 << endl;
	 cout << "ZDROWIE:" << hp << endl;
	 
	 cout << " PRZECIWNIK:" << endl << "Stan ogolny:" << ejog << endl;
	 cout << "TIER:1" << et1 << "2" << et2 << "3" << et3 << endl;
	 cout << "ZDROWIE:" << ehp << endl;

	 cout << "1.Moc specjalna" << endl;
	 cout << "2.Jednostka tier 1" << endl;
	 cout << "3.Jednostka tier 2" << endl;
	 cout << "4.Jedsnotka tier 3" << endl;
	 cin >> com;

	 switch (com) {
	 case '1':

	 case '2':
		 t1 = t1 - 1;
		 break;

	 case'3':
		 t2 = t2 - 1;
		 break;

		 case '4':
			 t3 = t3 - 1;
			 break;
	 }
 }

 void Game::SI()
 {
 }

 void Game::gamePlayer()
 {
	 cout << " GRACZ:" << endl << "Stan ogolny:" << jog << endl;
	 cout << "TIER:1" << t1 << "2" << t2 << "3" << t3 << endl;
	 cout << "ZDROWIE:" << hp << endl;

	 cout << " GRACZ2:" << endl << "Stan ogolny:" << ejog << endl;
	 cout << "TIER:1" << et1 << "2" << et2 << "3" << et3 << endl;
	 cout << "ZDROWIE:" << ehp << endl;
 }
