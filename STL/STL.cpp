// STL.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include "Druzyna.h"
using namespace std;

int main() {
    vector<druzyna> liga;
    liga.push_back(druzyna("Druzyna A", 4, 4, 2, 10, 7));
    liga.push_back(druzyna("Druzyna B", 4, 3, 3, 14, 12));
    liga.push_back(druzyna("Druzyna C", 3, 5, 2, 11, 9));
    liga.push_back(druzyna("Druzyna D", 3, 4, 3, 9, 9));
    liga.push_back(druzyna("Druzyna E", 2, 6, 2, 10, 8));
    liga.push_back(druzyna("Druzyna F", 2, 5, 3, 8, 10));
    liga.push_back(druzyna("Druzyna G", 5, 3, 2, 15, 10));
    liga.push_back(druzyna("Druzyna I", 4, 4, 2, 12, 8));
    liga.push_back(druzyna("Druzyna J", 2, 4, 4, 7, 12));
    liga.push_back(druzyna("Druzyna K", 1, 3, 6, 6, 15));
    sort(liga.begin(), liga.end(), porownajDruzyny);
    for (auto& druzyna : liga) {
        cout << druzyna;
    }

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
