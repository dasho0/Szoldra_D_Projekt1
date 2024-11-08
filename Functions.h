#ifndef FUNCTIONS_H
#define FUNCTIONS_H


/**
 * @struct Weze³ listy dwukierunkowej
 * @brief W tej strukturze utworzony jest weze³
 */
struct list_w {
    int data;      /**< Dane przechowywane w wezle */
    list_w* prev;    /**< Wskaznik na poprzedni weze³ */
    list_w* next;    /**< Wskaznik na nastêpny weze³ */

    /**
     * @brief Konstruktor wêz³a
     * @param value Wartoœæ przechowywana w wêŸle
     */
    list_w(int value);
};



/**
 * @class lista dwukierunkowa
 * @brief W tej klasie zostaje utworzona lista dwukierunkowa
 */
class listww {
private:
    list_w* head; /**< Wskaznik na pierwszy element listy */
    list_w* tail; /**< Wskaznik na ostatni element listy */
    int size;   /**< Rozmiar listy */

public:
    /**
     * @brief Konstruktor listy
     */
    listww();

    /**
     * @brief Destruktor listy
     */
    ~listww();

    /**
     * @brief Dodaje element na poczatek listy
     * @param value Wartosc do dodania
     */
    void element_f(int value);

    /**
     * @brief Dodaje element na koniec listy
     * @param value Wartosc do dodania
     */
    void element_l(int value);

    /**
     * @brief Dodaje element pod wskazany indeks
     * @param index Indeks, pod ktory ma zostaæ dodany element
     * @param value Wartoœæ do dodania
     */
    void element_in(int index, int value);

    /**
     * @brief Funkcja usuwajaca pierwszy element z listy
     */
    void element_r_f();

    /**
     * @brief Funkcja usuwajaca ostatni element z listy
     */
    void element_r_l();

    /**
     * @brief Funkcja usuwajaca element z listy o podanym indeksie
     * @param index Indeks elementu do usuniêcia
     */
    void element_r_in(int index);

    /**
     * @brief Funkcja wyswietlajaca liste
     */
    void list_show() const;

    /**
     * @brief Funkcja wyswietlaj¹ca liste w odwrotnej kolejnosci
     */
    void list_show_reverse() const;

    /**
     * @brief Funkcja wyswietlaj¹ca nastepny element po podanym elemencie
     * @param value Wartosc, po której szukamy nastepnego elementu
     */
    void show_element_next(int value) const;

    /**
     * @brief Funkcja wyswietlajaca poprzedni element przed podanym elementem
     * @param value Wartosc, przed która szukamy poprzedniego elementu
     */
    void show_element_prev(int value) const;

    /**
     * @brief Funkcja czyszczaca liste
     */
    void clear();
};


/**
* @brief Funkcja powtarzajaca program
*/
bool lauf();

#endif // !FUNCTIONS_H
