#include <iostream>
#include <cmath>

// Funkcja obliczająca kąt skręcenia pręta
double fi(double M_s, double len, double Kirch, double polar) {
    return (M_s * len) / (Kirch * polar);
}

int main() {
    // Deklaracja zmiennych
    double M_s, len, Kirch, polar;
    
    // Inicjalizacja stałych wartości Kirchhoffa i biegunowego momentu bezwładności
    Kirch = 0.85e11;  // [Pa]
    polar = 6.44e-6;  // [m^4]
    
    // Pobieranie wartości od użytkownika
    std::cout << "Podaj moment skrecajacy M_s [Nm]: ";
    std::cin >> M_s;
    std::cout << "Podaj dlugosc pręta len [m]: ";
    std::cin >> len;

    // Obliczenie kąta skręcenia w radianach
    double wynik_rad = fi(M_s, len, Kirch, polar);

    // Konwersja na stopnie
    double wynik_deg = wynik_rad * (180.0 / M_PI);

    // Wyświetlenie wyników
    std::cout << "Kat skrecenia wynosi:\n";
    std::cout << "W radianach: " << wynik_rad << " rad\n";
    std::cout << "W stopniach: " << wynik_deg << " deg\n";

    return 0;
}
