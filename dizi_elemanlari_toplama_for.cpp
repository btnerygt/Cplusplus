#include <iostream>

int main() 
{
    int dizi[] = {5, 2, 7, 1, 9};
    int toplam = 0;

    for (int i = 0; i < sizeof(dizi) / sizeof(dizi[0]); i++) 
    {
        toplam += dizi[i];
    }

    std::cout << "Toplam: " << toplam << std::endl;

    return 0;
}
