#include <iostream>

int main() 
{
    int dizi[] = {1, 2, 3, 4, 5};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);

    int toplam = 0;
    int i = 0;

    while(i < boyut) 
    {
        toplam += dizi[i];
        i++;
    }

    std::cout << "Toplam: " << toplam << std::endl;

    return 0;
}
