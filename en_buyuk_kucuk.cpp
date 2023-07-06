#include <iostream>

int main() 
{
    int dizi[] = {10, 5, 7, 2, 15};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);

    int max = dizi[0];
    int min = dizi[0];

    for (int i = 1; i < boyut; i++) 
    {
        if (dizi[i] > max) 
        {
            max = dizi[i];
        }
        if (dizi[i] < min) 
        {
            min = dizi[i];
        }
    }

    std::cout << "Maksimum sayi: " << max << std::endl;
    std::cout << "Minimum sayi: " << min << std::endl;

    return 0;
}
