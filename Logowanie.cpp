#include "Logowanie.h"
#include <iostream>


void Logowanie::log()
{
    string LoginStr, PasswordStr;
    cout << "Podaj login: " << endl;

    cin >> LoginStr;
    cout << "Podaj haslo:" << endl;
    cin >> PasswordStr;
    if ((LoginStr == "Administrator") && (PasswordStr == "Informatyka")) {
        cout << "Wpisano login : " << LoginStr << "; oraz haslo : " << PasswordStr << endl << endl;
    }
    else {
        cout << "BAD LOGIN OR PASSWORD - SELFDESTRUCTION PROCEDURE STARTED" << endl << "HAVE A NICE DAY ..." << endl << endl;
    }
    system("pause");
}

