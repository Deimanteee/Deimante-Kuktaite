#include "Studentas.h"
#include "Ivedimas.h"
#include "Isvedimas.h"
#include <vector>

using namespace std;

int main() {
    vector <Studentas> k;
    Ivedimas( k );
    Isvedimas( k );
    system("pause");
    return 0;

}
