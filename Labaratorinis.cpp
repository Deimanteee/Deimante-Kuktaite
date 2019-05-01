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
        ifstream fr("fail.txt");
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
