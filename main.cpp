#include <iostream>
#include <cmath>
#include <iomanip>  // dla setprecision

using namespace std;

int x;
unsigned int y=4294967295;
int z;

int main()
{
    x = (pow(2,32)/2)-1;    // potegowanie = podstawa, wykladnik 2^32
    z = y+1;

    cout << setprecision(20);   // 20 miejsc po przecinku

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << sizeof(x) << endl;  // rozmiar w bajtach zmiennej

    return 0;
}
