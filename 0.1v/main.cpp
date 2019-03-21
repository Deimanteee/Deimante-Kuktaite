#include <iostream>
#include <vector>


using namespace std;
struct eilute{
    string vardas, pavarde;
    double egz, vid, med, rezultatas;
    vector<float>paz;
};

int main()
{   char a; double j, sum=0;
    while (true){
    cout << "Hello world!" << endl;
    cout<<123<<endl;

    eilute k1;
    k1.vardas="ggffdf";
    k1.pavarde="erwerewrw";
    k1.egz=8;
    for (int i=0; i<5; i++){
            cout<<"Iveskite paz.: ";
            cin>>j;
        k1.paz.push_back(j);
        sum=sum+j;
    }
    k1.vid=sum/k1.paz.size();
    k1.rezultatas=0.3*k1.vid+0.7*k1.egz;
    cout<<k1.vardas<<"; "<<k1.pavarde<<"; "<< k1.egz<<"; "<<k1.vid<<"; "<<k1.rezultatas<<endl;
        cin>>a;
        if (a=='t') break;
    }
    return 0;
}
