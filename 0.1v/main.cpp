#include <iostream>
#include <vector>
#include <iomanip>


using namespace std;
struct eilute{
    string vardas, pavarde;
    double egz, vid, med, rezultatas;
    vector<float>paz;

    string vardas1, pavarde1;
    double egz1, vid1, med1, rezultatas1;
    vector<float>paz1;
};

int main()
{   char a; double j, sum=0;
    while (true){

    eilute k1;
    k1.vardas="Arvydas";
    k1.pavarde="Sabonis";
    k1.egz=8;
    for (int i=0; j!=0; i++){
            cout<<"Iveskite paz.: ";
            cin>>j;
         if (j!=0 && j<11){ k1.paz.push_back(j);
                sum=sum+j;}
    }
    k1.vid=sum/k1.paz.size();
    k1.rezultatas=0.3*k1.vid+0.7*k1.egz;

string vardas1, pavarde1;
    double egz1, vid1, med1, rezultatas1;
    vector<float>paz1;

    eilute k2;
    k2.vardas1="Rimas";
    k2.pavarde1="Kurtinaitis";
    k2.egz1=9;
    for (int i=0; j!=0; i++){
            cout<<"Iveskite paz.: ";
            cin>>j;
         if (j!=0 && j<11){ k2.paz1.push_back(j);
                sum=sum+j;}
    }
    k2.vid1=sum/k2.paz1.size();
    k2.rezultatas1=0.3*k2.vid1+0.7*k2.egz1;


    cout<<"Vardas"<<setw(12)<<"Pavarde"<<setw(20)<<"Galutinis (vid)"<<endl;






    cout.fill('-');
    cout<<"-";
    cout.width(40);
    cout<<"-\n";
    cout.fill(' ');




    cout<<k1.vardas<<setw(11)<<k1.pavarde<<setw(10)<<k1.vid<<setw(10)<<k1.rezultatas<<endl;
        cin>>a;

         cout<<k2.vardas1<<setw(11)<<k2.pavarde1<<setw(10)<<k2.vid1<<setw(10)<<k2.rezultatas1<<endl;
        cin>>a;

    }
    return 0;
}
