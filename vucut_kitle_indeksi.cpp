#include <iostream>
int main()
{
    double boy,kilo,indeks;

    std::cout << "kilo(kg): ";
    std::cin >> kilo;

    std::cout << "boy(m): ";
    std::cin >> boy;

    indeks = kilo / (boy * boy);

    std::cout << "Vucut kitle indeksiniz: " << indeks << std::endl;

    if(indeks<18.5)
        std::cout << "ideal kilonun altinda" << std::endl;
    else if(indeks>=18.5 && indeks<=24.9)
        std::cout << "ideal kiloda" << std::endl;
    else if(indeks>=25 && indeks<=29.9)
        std::cout << "ideal kilonun ustunde" << std::endl;
    else if(indeks>=30 && indeks<=39.9)
        std::cout << "ideal kilonun ustunde - obez" << std::endl;
    else if(indeks>=40)
        std::cout << "ideal kilonun cok ustunde - morbid obez" << std::endl;
    else
        std::cout << "gecerli degerler giriniz." << std::endl;
}