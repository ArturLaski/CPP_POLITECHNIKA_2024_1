#include <iostream>
#include <cmath>

// Funkcja obliczająca kąt skręcenia pręta z domyślną wartością Kirchhoffa
double fi(double M_s, double len, double polar, double Kirch = 0.85e11) {
    return (M_s * len) / (Kirch * polar);
}

int main() {
    // Deklaracja zmiennych
    double M_s, len, polar, Kirch;
    
    // Stała wartość biegunowego momentu bezwładności
    polar = 6.44e-6;  // [m^4]

    // Pobranie danych od użytkownika
    std::cout << "Podaj moment skrecajacy M_s [Nm]: ";
    std::cin >> M_s;
    std::cout << "Podaj dlugosc pręta len [m]: ";
    std::cin >> len;
    std::cout << "Podaj modul Kirchhoffa G [Pa] (opcjonalnie): ";
    std::cin >> Kirch;

    // Wywołanie funkcji z podaniem wszystkich argumentów
    double wynik1_rad = fi(M_s, len, polar, Kirch);
    double wynik1_deg = wynik1_rad * (180.0 / M_PI);

    // Wywołanie funkcji z domyślnym modułem Kirchhoffa
    double wynik2_rad = fi(M_s, len, polar); // Domyślne G = 0.85e11
    double wynik2_deg = wynik2_rad * (180.0 / M_PI);

    // Wyświetlenie wyników
    std::cout << "\nWyniki obliczen:\n";

    std::cout << "1. Z podaniem wszystkich argumentow:\n";
    std::cout << "   W radianach: " << wynik1_rad << " rad\n";
    std::cout << "   W stopniach: " << wynik1_deg << " deg\n";

    std::cout << "2. Z domyslnym modulem Kirchhoffa:\n";
    std::cout << "   W radianach: " << wynik2_rad << " rad\n";
    std::cout << "   W stopniach: " << wynik2_deg << " deg\n";

    return 0;
}
