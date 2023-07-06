#include <iostream>
using namespace std;

int main() 
{
	double taban, yukseklik, kenar1, kenar2, kenar3, alan, cevre;

	cout << "taban: ";
	cin >> taban;
	cout << "yukseklik: ";
	cin >> yukseklik;
	cout << "1. kenar: ";
	cin >> kenar1;
	cout << "2. kenar: ";
	cin >> kenar2;
	cout << "3. kenar: ";
	cin >> kenar3;

	alan = (taban * yukseklik) / 2;

	cevre = kenar1 + kenar2 + kenar3;

	cout << "Ucgenin Alani: " << alan << endl;
	cout << "Ucgenin Cevresi: " << cevre << endl;

	return 0;
}
