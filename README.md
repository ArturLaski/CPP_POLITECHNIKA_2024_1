# Program obliczający kąt skręcenia pręta

## Opis projektu

Projekt składa się z trzech zadań, których celem jest rozbudowa programu obliczającego **kąt skręcenia pręta** w układzie zawieszenia. Każde zadanie wprowadza nowe funkcjonalności, które zostały opisane poniżej.

---

## Zadanie 1 - Plik: `zad1.cpp`

### Treść zadania

Stwórz funkcję `fi()`, która przyjmuje 4 argumenty:
- \( M_s \) - moment skręcający pręt [Nm]
- \( l \) - długość pręta [m]
- \( G \) - moduł Kirchhoffa [Pa]
- \( I_0 \) - biegunowy moment bezwładności przekroju [m\(^4\)]

Funkcja zwraca kąt skręcenia pręta w radianach, zgodnie ze wzorem:

\[
\varphi = \frac{M_s \cdot l}{G \cdot I_0}
\]

### Dodatkowe wymagania:
- W funkcji głównej zdefiniuj zmienne `M_s`, `len`, `Kirch`, `polar`.
- Zainicjalizuj stałe wartości:
  - `Kirch = 0.85e11` [Pa]
  - `polar = 6.44e-6` [m\(^4\)]
- Program pobiera od użytkownika wartości `M_s` i `len`.
- Wynik wyświetl w **radianach** oraz **stopniach**.

---

## Zadanie 2 - Plik: `zad2.cpp`

### Treść zadania

Zmodyfikuj funkcję `fi()` tak, aby argument odpowiadający modułowi Kirchhoffa \( G \) był **domyślny**. Funkcja ma być wywoływana dwukrotnie:
1. Raz z podaniem wszystkich 4 argumentów.
2. Raz z **3 argumentami** (bez podania \( G \)).

### Dodatkowe wymagania:
- Funkcja `fi()` przyjmuje domyślną wartość `G = 0.85e11`.
- Program powinien obliczać i wyświetlać wyniki dla obu przypadków.

---

## Zadanie 3 - Plik: `zad3.cpp`

### Treść zadania

Stwórz **drugą funkcję** o nazwie `fi()`, która:
- Przyjmuje jeden argument w postaci **ciągu znaków** (string).
- Wyświetla komunikat z wykorzystaniem tego argumentu.
- Nie zwraca żadnej wartości (funkcja typu `void`).

### Wymagania:
- Funkcja główna ma wywoływać obie wersje funkcji `fi()`:
  - Jedną do obliczania kąta skręcenia.
  - Drugą do wyświetlania komunikatu.

---

## Struktura plików projektu

```
Projekt/
│
├── README.md        - Ten plik z opisem projektu
│
├── zad1.cpp         - Rozwiązanie Zadania 1
├── zad2.cpp         - Rozwiązanie Zadania 2
└── zad3.cpp         - Rozwiązanie Zadania 3
```

---

## Kompilacja i uruchomienie

Aby skompilować poszczególne programy, użyj kompilatora **g++** (GNU Compiler Collection):

### Kompilacja
```bash
g++ -o zad1 zad1.cpp
g++ -o zad2 zad2.cpp
g++ -o zad3 zad3.cpp
```

### Uruchomienie
```bash
./zad1
./zad2
./zad3
```

---

## Przykładowe wyniki

### **Zadanie 1:**
**Dane wejściowe:**
```
Podaj moment skrecajacy M_s [Nm]: 500
Podaj dlugosc pręta len [m]: 2
```
**Wynik:**
```
Kat skrecenia wynosi:
W radianach: 1.176e-5 rad
W stopniach: 0.00067 deg
```

### **Zadanie 2:**
**Dane wejściowe:**
```
Podaj moment skrecajacy M_s [Nm]: 500
Podaj dlugosc pręta len [m]: 2
Podaj modul Kirchhoffa G [Pa]: 0.9e11
```
**Wynik:**
```
1. Z podaniem wszystkich argumentow:
   W radianach: 1.308e-5 rad
   W stopniach: 0.00075 deg

2. Z domyslnym modulem Kirchhoffa:
   W radianach: 1.176e-5 rad
   W stopniach: 0.00067 deg
```

### **Zadanie 3:**
**Wynik:**
```
Kat skrecenia wynosi:
W radianach: 1.176e-5 rad
W stopniach: 0.00067 deg

Komunikat: Obliczenia zakończone pomyślnie!
```

---

## Autor

- **Łukasz Łaski**
- Data: 18 grudnia 2024
