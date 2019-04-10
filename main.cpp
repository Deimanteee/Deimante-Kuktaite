#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>

using namespace std;
struct student
{
    string vardas;
    string pavarde;
    double vidurkis = 0;
    double mediana = 0;
    int egzas = 0;
};

int main()
{
    student studentu[2];
for(int r = 0; r <2; r++)
    {
        int vardo_ilgis;

        cout << "Iveskite studento varda:" << endl;
        cin >>  studentu[r].vardas;

        vardo_ilgis =  studentu[r].vardas.length();

        if( studentu[r].vardas[0] >= 65 &&  studentu[r].vardas[0]<=90)
            {
                for(int i = 1; i < vardo_ilgis; i++)

                    {
                        if ( studentu[r].vardas[i] >= 97 &&  studentu[r].vardas[i] <= 122 && studentu[r].vardas[0] >= 65 && studentu[r].vardas[0]<=90 )


                            {
                                continue;
                            }
else
                            {

              cout << "Blogai ivestas vardas" << endl;
              i = 1;
              cout << "Bandykite ivesti dar karta varda: ";
              cin >>  studentu[r].vardas;
                            }
                    }
            }
else
         {
            for(int i = 0; i < vardo_ilgis; i++)
                {
                    if (studentu[r].vardas[i] >= 97 && studentu[r].vardas[i] <= 122 && studentu[r].vardas[0] >= 65 && studentu[r].vardas[0]<=90)
                        {
                            continue;
                        }
                    else
                        {

                            cout << "Blogai ivestas vardas" << endl;
                            i = 0;
                            cout << "Bandykite dar karta ivesti varda: ";
                            cin >> studentu[r].vardas;

                        }
                }
        }





         cout << "Iveskite pavarde: ";
         cin >>  studentu[r].pavarde;

         int pavardes_ilgis;

         pavardes_ilgis =  studentu[r].pavarde.length();

         if( studentu[r].pavarde[0] >= 65 &&  studentu[r].pavarde[0]<=90)
            {
                for(int j = 1; j < pavardes_ilgis; j++)
                    {
                        if ( studentu[r].pavarde[j] >= 97 &&  studentu[r].pavarde[j] <= 122 &&  studentu[r].pavarde[0] >= 65 &&  studentu[r].pavarde[0]<=90)
                            {
                                continue;
                            }
                        else
                            {
                                cout << endl;
                                cout << "Blogai ivesta pavarde" << endl;
                                j = 0;
                                cout << "Bandykite dar karta ivesti pavarde: ";
                                cin >>  studentu[r].pavarde;
                            }
                    }
            }
   else
            {
                for(int j = 0; j < pavardes_ilgis; j++)
                    {
                        if (studentu[r].pavarde[j] >= 97 && studentu[r].pavarde[j] <= 122 && studentu[r].pavarde[0] >= 65 && studentu[r].pavarde[0] <=90)
                            {
                                continue;
                            }
                        else
                            {
                                cout << endl;
                                cout << "Blogai ivesta pavarde" << endl;
                                j = 0;
                                cout << "Bandykite dar karta ivesti pavarda: ";
                                cin >> studentu[r].pavarde;
                            }
                    }
            }

         cout << "Iveskite namu darbu skaiciu: ";

         string input;
         cin >> input;

         while (input.find_first_not_of( "0123456789" ) != string::npos)
            {
                cout << endl << "Blogai ivestas namu darbu skaicius" << endl << endl;
                cout << "Bandykite dar karta ivesti pazymi: ";
                cin >> input;
            }



         int pazymys = stoi(input);
         double suma = 0;

         for (int i = 0; i < pazymys; i++)
            {
                cout << "Iveskite " << i+1 << " -ojo namu darbo pazymi: ";
                cin >> input;

         while (input.find_first_not_of( "0123456789" ) != string::npos)
            {
                cout << endl << "Blogai ivestas namu darbu pazymys" << endl << endl;
                cout << "Bandykite dar karta ivesti pazymi: ";
                cin >> input;
            }

         int pazymys1 = stoi( input );

         while ( pazymys1 < 1 || pazymys1 > 10 )
            {
                cout << endl << "Blogai ivestas namu darbu pazymys" << endl << endl;
                cout << "Bandykite dar karta ivesti pazymi: ";
                cin >> input;

                    while (input.find_first_not_of( "0123456789" ) != string::npos)
                      {
                        cout << endl << "Blogai ivestas namu darbu pazymys" << endl << endl;
                        cout << "Bandykite dar karta ivesti pazymi: ";
                        cin >> input;
                      }
                pazymys1 = stoi( input );
            }
         suma+=pazymys1;
            }
              studentu[r].vidurkis = suma/pazymys;


         cout << endl;
         cout << "Iveskite egzamino pazymi: ";
         cin >> input;

         while (input.find_first_not_of( "0123456789" ) != string::npos)
            {
                cout << endl << "Blogai ivestas egzamino pazymys" << endl << endl;
                cout << "Bandykite dar karta ivesti pazymi: ";
                cin >> input;
            }

         double egzaminas = stoi( input );

         while ( egzaminas < 1 || egzaminas > 10 )
            {
                cout << endl << "Blogai ivestas egzamino pazymys" << endl << endl;
                cout << "Bandykite dar karta ivesti pazymi: ";
                cin >> input;
                egzaminas = stoi( input );

         while (input.find_first_not_of( "0123456789" ) != string::npos)
            {
                cout << "Blogai ivestas egzamino pazymys" << endl;
                cout << "Bandykite dar karta ivesti pazymi: ";
                cin >> input;
            }
                egzaminas  = stoi( input );
            }

          studentu[r].egzas = egzaminas;
         cout << endl;
    }


cout << "Vardas";
cout.width(20);
cout << "Pavarde";
cout.width(15);
cout << "";
cout << "Galutinis (Vid.)" << endl;
cout.fill('-');
cout.width(58);
cout << " " << endl;
cout.fill(' ');
cout.width(58);

double galutinis = 0;

for ( int studentusk = 0; studentusk < 3; studentusk++)
    {
         cout.width(17); cout << left <<  studentu[studentusk].vardas << " ";
         galutinis = 0.6 *  studentu[ studentusk ].egzas + 0.4* studentu[studentusk].vidurkis;
         if(galutinis == 10)
            {
                cout.width(33); cout << left <<  studentu[studentusk].pavarde << " ";
                cout.width(0); cout << right << fixed << setprecision( 2 ) << galutinis << endl;
            }
             else
            {
                cout.width(34); cout << left <<  studentu[studentusk].pavarde << " ";
                cout.width(0); cout << right << fixed << setprecision( 2 ) << galutinis << endl;
            }
    }


return 0;
}




