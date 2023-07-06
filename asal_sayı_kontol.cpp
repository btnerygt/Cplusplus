#include <iostream>

bool AsalKontrol(int sayi) 
{
    if (sayi <= 1) 
    {
        return false;
    }

    for (int i = 2; i * i <= sayi; i++) 
    {
        if (sayi % i == 0) 
        {
            return false;
        }
    }

    return true;
}

int main() 
{
    int sayi;
    std::cout << "Sayiyi giriniz: ";
    std::cin >> sayi;

    if (AsalKontrol(sayi)) 
    {
        std::cout << sayi << " asal sayidir." << std::endl;
    } 
    else 
    {
        std::cout << sayi << " asal sayi degildir." << std::endl;
    }

    return 0;
}
