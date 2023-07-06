#include <iostream>
using namespace std;

int main() 
{
   int satir, sayi = 1;

   cout << "Satir sayisini giriniz: ";
   cin >> satir;

   for (int i = 1; i <= satir; i++) 
   {
      for (int j = 1; j <= i; j++) 
      {
         cout << sayi << " ";
         sayi++;
      }
      cout << endl;
   }

   return 0;
}
