#include <iostream>

int fibonacci(int n) 
{
    if (n <= 1) 
    { 
        return n;
    }
  
    int birincisayi = 0;
    int ikincisayi = 1;
    int sonuc;
  
    std::cout << "Tum Fibonacci degerleri:" << "\n";

    for (int i = 2; i <= n; ++i) {
        sonuc = birincisayi + ikincisayi;
        birincisayi = ikincisayi;
        ikincisayi = sonuc;

        std::cout << sonuc << "\n";
    }
  
    return sonuc;
}

int main() 
{
    int n;
    std::cout << "Fibonaccinin kacinci degerini ogrenmek istersin: ";
    std::cin >> n;
  
    int fibonacci_deger = fibonacci(n);
  
    std::cout << "------------------------------------- " << std::endl;
    std::cout << n << ". fibonacci degeri: " << fibonacci_deger << std::endl;
  
    return 0;
}
