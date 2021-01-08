#pragma once
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <windows.h>

using namespace std;

class Zabezpieczenia {
public:
	void wypisz(char tablica[9]);
	void jakieznaki(char haslo[9]);
	
	
	void zabezpieczenia();

	void tworzeniehasla(char haslo[9], char znaki[9], int iloscznakow[3]);
	void szyfr(char haslo[9], char cezar[9], int lenskok);
	void deszyfr(char cezar[9], char decezar[9], int lenskok);
	


};


