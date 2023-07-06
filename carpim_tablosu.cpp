#include <iostream>

int main() 
{
    int boyut;
    std::cout << "Carpim tablosunun boyutunu giriniz: ";
    std::cin >> boyut;

    // çarpım tablosundaki başta bulunacak satır kısım
    std::cout << " x |";
    for (int i = 1; i <= boyut; ++i) 
    {
        std::cout << "  " << i << "  |";
    }
    //çizgiler
    std::cout << "\n---|";
    for (int i = 1; i <= boyut; ++i) 
    {
        std::cout << "-----|";
    }
    std::cout << "\n";

    // çarpım tablosunun satırları
    for (int i = 1; i <= boyut; ++i) 
    {
        std::cout << " " << i << " |";
        for (int j = 1; j <= boyut; ++j) 
        {
            std::cout << "  " << i * j << "  |";
        }
        //çizgiler
        std::cout << "\n---|";
        for (int j = 1; j <= boyut; ++j) 
        {
            std::cout << "-----|";
        }
        std::cout << "\n";
    }

    return 0;
}
