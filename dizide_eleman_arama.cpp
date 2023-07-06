#include <iostream>

int main() 
{
    int dizi[] = {2, 4, 6, 8, 10};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    int arama = 6;
    bool buldu = false;

    for (int i = 0; i < boyut; i++) 
    {
        if (dizi[i] == arama) 
        {
            buldu = true;
            break;
        }
    }

    if (buldu) 
    {
        std::cout << "Bu eleman dizide mevcut." << std::endl;
    } 
    else 
    {
        std::cout << "Bu eleman dizide mevcut değil." << std::endl;
    }

    return 0;
}
