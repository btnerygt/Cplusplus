#include <iostream>
#include <vector>

void pascalucgeni(int satir) {

    std::vector<std::vector<int>> ucgen(satir, std::vector<int>(satir));

    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j <= i; j++) 
        {
            if (j == 0 || j == i) 
            {
                ucgen[i][j] = 1;
            }
            else 
            {
                ucgen[i][j] = ucgen[i - 1][j - 1] + ucgen[i - 1][j];
            }
            
            std::cout << ucgen[i][j] << " ";
        }
        
        std::cout << std::endl;
    }
}
int main() {
    int satir;
    
    std::cout << "Pascal ucgeninin satir sayisi: ";
    std::cin >> satir;
    
    pascalucgeni(satir);
    
    return 0;
}
