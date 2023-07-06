#include <iostream>
#include <string>

bool Palindrom(int sayi) 
{
    std::string str = std::to_string(sayi);
    int sol = 0;
    int sag = str.length() - 1;

    while (sol < sag) 
    {
        if (str[sol] != str[sag]) 
        {
            return false;
        }

        sol++;
        sag--;
    }

    return true;
}

int main() 
{
    int sayi;

    std::cout << "Bir sayi gir: ";
    std::cin >> sayi;

    if (Palindrom(sayi)) 
    {
        std::cout << sayi << " sayisi palindromdur." << std::endl;
    } 
    else 
    {
        std::cout << sayi << " sayisi palindrom degildir." << std::endl;
    }

    return 0;
}
