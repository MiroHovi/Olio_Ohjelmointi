#include <iostream>
#include <iomanip>

//summan lasku
void calcSum(int a, int b) {
    std::cout << "Summa: " << a + b << std::endl;
}

//jako
void calcDiv(int a, int b) {
    if (b == 0) {
        std::cout << "Virhe: Jakaja ei voi olla nolla!" << std::endl;
    } else {
        std::cout << "Osamaara: " << std::fixed << std::setprecision(2) << (float)a / b << std::endl;
    }
}

// Funktio summalle
int retSum(int a, int b) {
    return a + b;
}

// Funktio jakoon
float retDiv(int a, int b) {
    if (b == 0) {
        std::cout << "Virhe: Jakaja ei voi olla nolla!" << std::endl;
        return 0.0; // Palautetaan 0, jos jakaja on nolla
    } else {
        return (float)a / b;
    }
}

int main() {
    int a, b;

    // Kysytään luvut
    std::cout << "Syota ensimmainen luku (a): ";
    std::cin >> a;
    std::cout << "Syota toinen luku (b): ";
    std::cin >> b;

    // Vaihe 2: Kutsutaan funktiot
    calcSum(a, b);
    calcDiv(a, b);

    // Vaihe 3: Kutsutaan funktiot, jotka palauttaa arvot
    std::cout << "Palautettu summa: " << retSum(a, b) << std::endl;
    float osamaara = retDiv(a, b);
    if (osamaara != 0.0) {
        std::cout << "Palautettu osamaara: " << std::fixed << std::setprecision(2) << osamaara << std::endl;
    }

    return 0;
}
