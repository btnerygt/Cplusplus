#include <iostream>

int main() 
{
    int sayi1, sayi2;
    std::cout << "baslangic sayisi: ";
    std::cin >> sayi1;
    std::cout << "bitis sayisi: ";
    std::cin >> sayi2;

    int toplam = 0;
    int i = sayi1;

    do {
        toplam += i;
        i++;
    } while (i <= sayi2);
    
    std::cout << sayi1 << " ve " << sayi2 << " arasindaki sayilarin toplami: " << toplam << std::endl;

    return 0;
}

