#include <iostream>
#include <vector>
#include <algorithm>

int main() 
{
    std::vector<int> sayilar = {5, 2, 8, 1, 9};

    // küçükten büyüğe sıralama
    std::sort(sayilar.begin(), sayilar.end());
    std::cout << "Kucukten buyuge siralama: ";
    for (int sayi : sayilar) 
    {
        std::cout << sayi << " ";
    }
    std::cout << std::endl;

    // büyükten küçüğe sıralama
    std::sort(sayilar.rbegin(), sayilar.rend());
    std::cout << "Buyukten Kucuge siralama: ";
    for (int sayi : sayilar) 
    {
        std::cout << sayi << " ";
    }
    std::cout << std::endl;

    return 0;
}
