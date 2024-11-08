// Szoldra_D_Projekt1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include "Functions.h"


/**
 * @brief Funkcja glowna do testowania listy
 * @param valx wybor opcji jaka ma zostać wykonana
 * @param insert_val wartosc jaka ma zostac dodana do listy
 * @param insert_index indeks listy
 * @return Status zakończenia programu
 */
int main() {
    listww list;
    int valx;
    int insert_val;
    int insert_index;
    std::cout << "Menu wyboru\n";
    std::cout << "1 - dodanie wartosci na poczatek | 2 - dodanie wartosci na koniec | 3 - Dodanie wartosci na wskazany indeks\n";
    std::cout << "4 - usuniecie wartosci na poczatku | 5 - usuniecie wartosci na koncu | 6 - Usuniecie wartosci na wskazanym indeksie\n";
    std::cout << "7 - Wyswietlenie elementu przed | 8 - wyswietlenie elementu po | 9 - wyswietlenie listy\n";
    std::cout << "10 - Wyświetlenie listy odwróconej | 11 - Wyczyszczenie listy\n";
    do {
        std::cout << "Podaj opcje: ";
        std::cin >> valx;
        if (valx == 1) {
            std::cout << "Podaj wartosc: ";
            std::cin >> insert_val;
            list.element_f(insert_val); // Dodanie wartości insert_val na pierwszy indeks
        }
        else if (valx == 2) {
            std::cout << "Podaj wartosc: ";
            std::cin >> insert_val;
            list.element_l(insert_val); // Dodanie wartości insert_val na ostatni indeks
        }
        else if (valx == 3) {
            std::cout << "Podaj indeks: ", std::cin >> insert_index;
            std::cout << "Podaj wartosc: ", std::cin >> insert_val;
            list.element_in(insert_index, insert_val); // Dodanie wartości insert_val na indeks insert_index
        }
        else if (valx == 4) {
            list.element_r_f(); // Usuniecie wartosci insert_val z początku listy listy
            std::cout << "Usunieto wartosc na poczatku\n";
        }
        else if (valx == 5) {
            list.element_r_l(); // Usuniecie wartosci insert_val z końca listy listy
            std::cout << "Usunieto wartosc na koncu\n";
        }
        else if (valx == 6) {
            std::cout << "Podaj indeks: ", std::cin >> insert_index;
            list.element_r_in(insert_index); // Usuniecie wartosci insert_index z listy
        }
        else if (valx == 7) {
            std::cout << "Podaj wartosc: ", std::cin >> insert_val;
            list.show_element_prev(insert_val); // Wsświetlenie elementu przed insert_val
        }
        else if (valx == 8) {
            std::cout << "Podaj wartosc: ", std::cin >> insert_val;
            list.show_element_next(insert_val); // Wyswietlenie elementu po insert_val
        }
        else if (valx == 9) {
            list.list_show();   // Wyswietlenie listy
        }
        else if (valx == 10) {
            list.list_show_reverse();   // Wyswietlenie list odwróconej
        }
        else if (valx == 11) {
            list.clear();   // Czyszczenie listy
        }
        else {
            std::cout << "Nie ma takiej opcji\n";
        }
    } while (lauf());

    return 0;
}