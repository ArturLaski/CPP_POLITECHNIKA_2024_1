#include <iostream>
#include <cmath>
#include <string>

// Funkcja obliczająca kąt skręcenia pręta
double fi(double M_s, double len, double polar, double Kirch = 0.85e11) {
    return (M_s * len) / (Kirch * polar);
}

// Druga funkcja fi() przyjmująca ciąg znaków i wyświetlająca komunikat
void fi(const std::string &komunikat) {
    std::cout << "Komunikat: " << komunikat << std::endl;
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

    // Wywołanie funkcji fi() z domyślną wartością Kirchhoffa
    double wynik_rad = fi(M_s, len, polar);
    double wynik_deg = wynik_rad * (180.0 / M_PI);

    // Wyświetlenie wyników
    std::cout << "\nKat skrecenia wynosi:\n";
    std::cout << "W radianach: " << wynik_rad << " rad\n";
    std::cout << "W stopniach: " << wynik_deg << " deg\n";

    // Wywołanie drugiej funkcji fi() z komunikatem
    fi("Obliczenia zakończone pomyślnie!");

    return 0;
}
