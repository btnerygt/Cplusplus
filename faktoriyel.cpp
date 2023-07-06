#include <iostream>
using namespace std;

int main() 
{
	int n;
	cout << "Pozitif bir deger gir: ";
	cin >> n;

	int faktoriyel = 1;

	for (int i = 1; i <= n; i++) 
	{
		faktoriyel *= i;
	}

	cout << n << "! = " << faktoriyel << endl;

	return 0;
}
