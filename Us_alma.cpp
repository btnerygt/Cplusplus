#include <iostream>

double ussu(double taban, int us) {
    double sonuc = 1.0;

    if (us > 0) {
        for (int i = 0; i < us; i++) {
            sonuc *= taban;
        }
    } else if (us < 0) {
        for (int i = 0; i > us; i--) {
            sonuc /= taban;
        }
    }

    return sonuc;
}

int main() {
    double taban;
    int us;
    std::cout << "taban deger:";
    std::cin >> taban;
    std::cout << "us deger:";
    std::cin >> us;
    double sonuc = ussu(taban, us);

    std::cout << taban << " ^ " << us << " = " << sonuc << std::endl;

    return 0;
}
