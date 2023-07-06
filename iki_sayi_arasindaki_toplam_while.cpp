#include <iostream>

int main() {
    int sayi1, sayi2;
    std::cout << "Baslangic sayisi: ";
    std::cin >> sayi1;
    std::cout << "Bitis sayisi: ";
    std::cin >> sayi2;

    int toplam = 0;
    while (sayi1 <= sayi2) {
        toplam += sayi1;
        sayi1++;
    }

    std::cout  << sayi1 << " ve " << sayi2 << " arasindaki sayilarin toplami: " << toplam << std::endl;

    return 0;
}
