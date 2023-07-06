#include <iostream>
using namespace std;

int main() 
{
    int sayi, kalan, toplam = 0, gecici;
    cout << "sayi giriniz: ";
    cin >> sayi;

    gecici = sayi;
    while (gecici != 0) 
    {
        kalan = gecici % 10;
        toplam += kalan * kalan * kalan;
        gecici /= 10;
    }

    if (toplam == sayi)
    {
        cout << sayi << " bir Armstrong sayidir.";
    }
    else
    {
        cout << sayi << " bir Armstrong sayi degildir.";
    }

    return 0;
}
