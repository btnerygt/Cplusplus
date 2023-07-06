#include <iostream>
using namespace std;

int main() 
{
    double taban, yukseklik;

    cout << "taban: ";
    cin >> taban;

    cout << "yukseklik: ";
    cin >> yukseklik;

    double alan = taban * yukseklik;
    double cevre = 2 * (taban + yukseklik);

    cout << "alan: " << alan << endl;
    cout << "cevre: " << cevre << endl;

    return 0;
}
