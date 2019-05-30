#include "Studentas.h"
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;

void Ivedimas(vector <Studentas> &studentai)
    {
    try
            {
                ifstream fr("kursiokai.txt");
                string temp;
                getline(fr, temp);
                while (!fr.eof())
                    {
                        Studentas laikinai;
    fr >> laikinai.vardas >> laikinai.pavarde;
        for (int j = 0, k; j < 3; j++)
        {
            fr >> k;
    laikinai.paz.push_back(k);
        }
fr >> laikinai.egzaminas;
unsigned suma = 0;
unsigned n = laikinai.paz.size();
for ( unsigned i = 0; n != i; ++i )
{
if (n % 2 && i == (n / 2))
{
laikinai.med = laikinai.paz[i]/2;}
                            else if ((!n % 2) && (i == (n / 2) || i == (n / 2 + 1)))
                            {
                            laikinai.med += laikinai.paz[i];
                            }
                            suma += laikinai.paz[i];
                            }
                        laikinai.vidurkis = suma / n;
                        studentai.push_back(laikinai);
            }
        fr.close();
        }
        catch (const ios_base::failure &e)
        {
        cout << "Nepavyko atidaryti failo" << e.what() << endl;
        terminate();
    }
    }
