#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

struct studentas
{
    string vardas;
    string pavarde;
    double vidurkis = 0;
    double mediana = 0;
    int egzas = 0;
};

int main()
{
    studentas mokinys[3];
for(int l = 0; l <3; l++)
    {
    int n;
    cout << "Iveskite " << l+1 << "-ojo studento varda:";
    cin >> mokinys[l].vardas;
    n = mokinys[l].vardas.length();
    if(mokinys[l].vardas[0] >= 65 && mokinys[l].vardas[0]<=90)
    {
    for(int i = 1; i < n; i++)
    {
    if (mokinys[l].vardas[i] >= 97 && mokinys[l].vardas[i] <= 122 && mokinys[l].vardas[0] >= 65 && mokinys[l].vardas[0]<=90)
    {
    continue;
    }
    else
    {
    cout << "Blogai ivestas vardas" << endl;
    i = 0;
    cout << "Bandykite dar karta ivesti varda: ";
    cin >> mokinys[l].vardas;
        }
        }
        }
         else
    {
    for(int i = 0; i < n; i++)
    {
     if (mokinys[l].vardas[i] >= 97 && mokinys[l].vardas[i] <= 122 && mokinys[l].vardas[0] >= 65 && mokinys[l].vardas[0]<=90)
        {
  continue;
        }
        else
        {
        cout << "Blogai ivestas vardas" << endl;
        i = 0;
        cout << "Bandykite dar kart ivesti varda: ";
        cin >> mokinys[l].vardas;
        }
        }
        }
         cout << "Pavarde: ";
         cin >> mokinys[l].pavarde;
         int m;
         m = mokinys[l].pavarde.length();
         if(mokinys[l].pavarde[0] >= 65 && mokinys[l].pavarde[0]<=90)
            {
    for(int j = 1; j < m; j++)
    {
    if (mokinys[l].pavarde[j] >= 97 && mokinys[l].pavarde[j] <= 122 && mokinys[l].pavarde[0] >= 65 && mokinys[l].pavarde[0]<=90)
    {
    continue;
    }
    else
    {
    cout << "Blogai ivesta pavarde" << endl;
    j = 0;
    cout << "Bandykite dar karta ivesti pavarde: ";
    cin >> mokinys[l].pavarde;
        }
    }
}
     else
       {
     for(int j = 0; j < m; j++)
                    {
    if (mokinys[l].pavarde[j] >= 97 && mokinys[l].pavarde[j] <= 122 && mokinys[l].pavarde[0] >= 65 && mokinys[l].pavarde[0] <=90)
        {
        continue;
        }
        else
        {
        cout << "Blogai ivesta pavarde" << endl;
        j = 0;
        cout << "Bandykite dar karta: ";
        cin >> mokinys[l].pavarde;
            }
        }
            }
        char kaz;
        string input;
        vector <int> pazymiai;
        do
        {
        cout << "Iveskite namu darbu pazymi: ";
        cin >> input;
        while (input.find_first_not_of( "0123456789" ) != string::npos)
        {
        cout<<"Blogai ivestas namu darbu pazymys"<< endl;
        cout<<"Bandykite dar karta ivesti pazymi: ";
       cin>>input;
                    }
        int  k = stoi (input);
        while ( k < 1||k > 10 ){
        cout<<endl<<"Blogai ivestas namu darbu pazymys"<<endl;
        cout<<"Bandykite dar karta ivesti namu darbu pazimi:";
        cin>>input;
        while (input.find_first_not_of( "0123456789" ) != string::npos)
            {
            cout<<endl<<"Blogai ivestas namu darbu pazymys"<< endl;
            cout<<"Bandykite dar karta ivesti pazymi: ";
            cin>>input;
            }
            k = stoi (input);
            }
        pazymiai.push_back(k);
        cout << "Ar dar norite ivedineti sio studento pazymius? (Taip/Betkoks simbolis): ";
        cin >> kaz;
            }
        while(kaz == 'T' || kaz == 't');
        int y = pazymiai.size();
        if(y)
    {
    int  suma = 0;
    for(int v = 0; v < y; v++)
    {
    suma+=pazymiai[v];
    if ((y % 2)&& v==((y / 2 + 1)*1.0))
    {
    mokinys[l].mediana = pazymiai[v];
    }
    else if (!( y % 2 ) && ( v == ( y / 2 ) || v == ( y / 2 + 1 )))
    {
    mokinys[l].mediana += pazymiai[v];
    }
    }

     if ( !( y % 2 ) )
        {
    mokinys[l].mediana /= 2;
        }

    mokinys[l].vidurkis = suma/y;
        }
cout << "Iveskite egzamino pazymi: ";
cin >> input;

while (input.find_first_not_of( "0123456789" ) != string::npos)
    {
    cout<<endl<<"Blogai ivestas egzamino pazymys"<<endl;
    cout<<"Bandykite dar karta ivesti egzamino pazymi: ";
    cin >> input;
    }
    double t = stoi( input );
    while ( t < 1 || t > 10 )
    {
    cout<<endl<<"Blogai ivestas egzamino pazymys" << endl;
    cout<<"Bandykite dar karta ivesti egzamino pazymi: ";
    cin>>input;
    t = stoi( input );
    while (input.find_first_not_of( "0123456789" ) != string::npos)
    {
    cout<<endl<<"Blogai ivestas egzamino pazymys"<<endl;
    cout<<"Bandykite dar karta ivesti egzamino pazymi: ";
    cin >> input;
    }
    t  = stoi( input );
    }

mokinys[l].egzas = t;
    }
char rez;
cout<<"Norite medianos? (Taip (T)/Ne (Betkoks simbolis)): ";
cin>>rez;
bool mediana = false;

if ( rez == 'T' || rez == 't' )
    {
mediana = true;
cout << "Vardas";
cout.width(20);
cout << "Pavarde";
cout.width(15);
cout << "";
cout << "Galutinis (Vid.)/Galutinis (Med.)" << endl;
cout.fill('-');
cout.width(75);
cout << " " << endl;
cout.fill(' ');
cout.width(75);
    }
else
    {
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
cout << endl;
double galutinis = 0;
double pakaitalas = 0;
for ( int w = 0; w < 3; w++)
    {
cout.width(18); cout << left << mokinys[w].vardas << " ";
cout.width(17); cout << left << mokinys[w].pavarde << " ";
if (mediana)
            {
galutinis = 0.4 * mokinys[w].mediana + 0.6 * mokinys[w].egzas;
pakaitalas = 0.6 * mokinys[w].egzas + 0.4 * mokinys[w].vidurkis;
if(galutinis == 10 || pakaitalas == 10)
             {
cout.width(20); cout << right << fixed << setprecision( 2 ) << pakaitalas << " ";
cout.width(16); cout << right << fixed << setprecision( 2 ) << galutinis << endl;
             }
                else
            {
cout.width(20); cout << right << fixed << setprecision( 2 ) << pakaitalas << " ";
cout.width(16); cout << right << fixed << setprecision( 2 ) << galutinis << endl;
    }
    }
        else
    {
pakaitalas = 0.6 * mokinys[w].egzas + 0.4*mokinys[w].vidurkis;
if(galutinis == 10 || pakaitalas == 10)
    {
cout.width(20); cout<<right<<fixed<< setprecision(2)<<pakaitalas<<endl;
    }
                 else
    {
cout.width(20); cout<<right<<fixed<<setprecision(2)<<pakaitalas<<endl;
    }

    }
}

 return 0;
}
}



