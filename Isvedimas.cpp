#include "Isvedimas.h"
#include "Studentas.h"
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

bool vardai(const Studentas &studentas1, const Studentas &studentas2)
    {
        return studentas1.vardas < studentas2.vardas;
    }
void Isvedimas(<Studentas> &lent)
    {
        cout << "Vardas";
        cout.width( 15 );
        cout << "Pavarde";
        cout.width( 7 );
        cout << " ";
        cout << "Galutinis (Med.)";
        cout.width( 7 );
        cout << " ";
        cout << "Galutinis (Vid.)" << endl;
        cout.fill( '-' );
        cout.width( 68 );
        cout << " " << endl;
        cout.fill( ' ' );
        cout.width( 58 );
        sort(lent.begin(), lent.end(), vardai);
        double galutinis = 0;
        for (Studentas i : lent)
            {
                galutinis = 0.6 * i.vidurkis + 0.4 * i.egzaminas;
                cout.width( 12 ); cout << left << i.vardas << " ";
                cout.width( 14 ); cout << left << i.pavarde << " ";
                cout.width( 16 ); cout << right << fixed << setprecision( 2 ) << i.med;
                cout.width( 23 ); cout << right << fixed << setprecision( 2 ) << galutinis << endl;
            }
    }
