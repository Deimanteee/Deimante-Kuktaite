#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;
struct Studentas
{
    string vardas;
    string pavarde;
    double vidurkis = 0;
    double median = 0;
    double galutinis = 0;
    double mediana = 0;
    int egzaminas;
    vector<int>pazimys;
    }
 eilute;
 void Ivedimas(vector <Studentas> &studentai)
    {
        ifstream fr("kursiokai.txt");
        string temp;
        getline(fr, temp);
        Studentas eilute;
        while (!fr.eof())
        {
        fr >> eilute.vardas >> eilute.pavarde;
        for (int j = 0, k; j < 3; j++)
        {
        fr >> k;
        eilute.pazimys.push_back(k);
        }
        fr >>eilute.egzaminas;
        unsigned suma = 0;
        unsigned n = eilute.pazimys.size();
        for (unsigned i=0;n!=i;++i)
        {
        if (n%2&&i==(n/2))
        {
        eilute.median = eilute.pazimys[i]/2;
        }
        else if (!(n%2)&&(i==(n/2)||i==(n/2+1)))
        {
        eilute.median += eilute.pazimys[i];

        }

        suma += eilute.pazimys[i] ;

        }

        eilute.vidurkis = suma / (n + 1);

        studentai.push_back( eilute);

            }

        fr.close();




    }
bool vardai(const Studentas &studentas1, const Studentas &studentas2)
    {
        return studentas1.vardas < studentas2.vardas;
    }
void Isvedimas(vector <Studentas> &lent)
    {
        cout << "Vardas";
        cout.width(15);
        cout << "Pavarde";
        cout.width(7);
        cout <<" ";
        cout << "Galutinis (Med.)";
        cout.width(7);
        cout <<" ";
        cout << "Galutinis (Vid.)" << endl;
        cout.fill( '-' );
        cout.width( 68 );
        cout << " " << endl;
        cout.fill( ' ' );
        cout.width( 58 );
        double gulutinis = 0;
        double mediana = 0;
        sort (lent.begin(), lent.end(), vardai);
        for ( Studentas i :lent )
            {
        cout.width( 12 ); cout << left << i.vardas << " ";
        cout.width( 14 ); cout << left << i.pavarde << " ";
        i.galutinis = i.vidurkis;
        i.mediana = i.median;
        cout.width( 16 ); cout << right << fixed << setprecision( 2 ) <<  i.galutinis;
        cout.width( 23 ); cout << right << fixed << setprecision( 2 ) <<  i.mediana << endl;
        }
    }
int main()

    {
        char uzkl;
        unsigned q = 0;
        vector <Studentas> k;
        Ivedimas(k);
        Isvedimas(k);
        return 0;
    }
