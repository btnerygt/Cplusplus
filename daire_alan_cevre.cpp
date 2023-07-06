#include <iostream>
using namespace std;

const double pi = 3.14; // tanımlı pi değerimiz

int main() 
{
    double r;
    
    cout << "Dairenin yaricapini giriniz: ";
    cin >> r;
    
    double alan = pi * r * r; // dairenin alanı
    double cevre = 2 * pi * r; // dairenin cevresi
    
    cout << "Dairenin Alani: " << alan << endl;
    cout << "Dairenin Cevresi: " << cevre << endl;
    
    return 0;
}
