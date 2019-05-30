#pragma once
#include <string>
#include <vector>
#include <iostream>

using namespace std;

struct Studentas
    {
        string vardas;
        string pavarde;
        double vidurkis = 0;
        double med = 0;
        unsigned egzaminas;
        vector<unsigned> paz;
    };
