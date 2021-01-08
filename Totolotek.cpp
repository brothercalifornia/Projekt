#include "Totolotek.h"


void Totolotek::los(int ilosc, int zakres)
{
    int* liczby = new int[ilosc];

    srand(time(0));

    for (int i = 0; i < ilosc; i++)
    {
        liczby[i] = (rand() % zakres) + 1;

        for (int j = 0; j < i; j++)
        {
            if (liczby[i] == liczby[j])
            {
                --i;
                break;
            }
        }


        for (int i = 0; i < ilosc; i++)
            printf("%d ", liczby[i]);

        printf("\n");

        delete[] liczby;
    }
}

void Totolotek::losowanie()
{
    int w = 0;

    while (w != 4)
    {
        cout << "Zasady:" << endl << "Gra zależy od ilości liczb z określonego zakresu w zależności od wybrnego wariantu" << endl << "1-Duży lotek (sześć liczb z zakresu 1-49)" << endl << "2-Mały lotek(pięc liczb z zakresu 1-35)" << endl << "3-Multi lotek(dzięsięciu liczb z zakresu 10-80)" << endl << "4-Wyjście" << endl;

        cout << "Niech szczęście będzie z Tobą!" << endl;

        cin >> w;
        cout << endl;
        cout << endl;
        cout << "Wylosowane liczby to;" << endl;

        switch (w)
        {
        case 1:
            los(6, 49);
            cout << "GRATULACJĘ!WYGRAŁEŚ" << endl;
            cout << endl;
            cout << endl;
            break;

        case 2:
            los(5, 75);
            cout << "GRATULACJĘ!WYGRAŁEŚ" << endl;
            cout << endl;
            cout << endl;

            break;

        case 3:
            los(10, 80);
            cout << "GRATULACJĘ!WYGRAŁEŚ" << endl;
            cout << endl;
            cout << endl;
            break;

        default:
            break;
        }
    }
}
