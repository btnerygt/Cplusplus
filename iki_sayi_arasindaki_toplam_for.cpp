#include <iostream>

int main() {
    int sayi1, sayi2;
    int toplam = 0;

    std::cout << "Baslangic sayisi: ";
    std::cin >> sayi1;

    std::cout << "Bitis sayisi: ";
    std::cin >> sayi2;

    for (int i = sayi1; i <= sayi2; i++) 
    {
        toplam += i;
    }

    std::cout << sayi1 << " ve " << sayi2 << " arasindaki sayilarin toplami: " << toplam << std::endl;

    return 0;
}
