#ifndef FUNCTIONS_H
#define FUNCTIONS_H

struct list_w {
    int data;      /**< Dane przechowywane w wêŸle */
    list_w* prev;    /**< WskaŸnik na poprzedni wêze³ */
    list_w* next;    /**< WskaŸnik na nastêpny wêze³ */

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
    list_w* head; /**< WskaŸnik na pierwszy element listy */
    list_w* tail; /**< WskaŸnik na ostatni element listy */
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
     * @brief Dodaje element na pocz¹tek listy
     * @param value Wartoœæ do dodania
     */
    void element_f(int value);

    /**
     * @brief Dodaje element na koniec listy
     * @param value Wartoœæ do dodania
     */
    void element_l(int value);

    /**
     * @brief Dodaje element pod wskazany indeks
     * @param index Indeks, pod który ma zostaæ dodany element
     * @param value Wartoœæ do dodania
     */
    void element_in(int index, int value);

    /**
     * @brief Funkcja usuwaj¹ca pierwszy element z listy
     */
    void element_r_f();

    /**
     * @brief Funkcja usuwaj¹ca ostatni element z listy
     */
    void element_r_l();

    /**
     * @brief Funkcja usuwaj¹ca element z listy o podanym indeksie
     * @param index Indeks elementu do usuniêcia
     */
    void element_r_in(int index);

    /**
     * @brief Funkcja wyœwietlaj¹ca listê
     */
    void list_show() const;

    /**
     * @brief Funkcja wyœwietlaj¹ca listê w odwrotnej kolejnoœci
     */
    void list_show_reverse() const;

    /**
     * @brief Funkcja wyœwietlaj¹ca nastêpny element po podanym elemencie
     * @param value Wartoœæ, po której szukamy nastêpnego elementu
     */
    void show_element_next(int value) const;

    /**
     * @brief Funkcja wyœwietlaj¹ca poprzedni element przed podanym elementem
     * @param value Wartoœæ, przed któr¹ szukamy poprzedniego elementu
     */
    void show_element_prev(int value) const;

    /**
     * @brief Funkcja czyszcz¹ca listê
     */
    void clear();
};


/**
* @brief Funkcja powtarzaj¹ca program
*/
bool lauf();

#endif // !FUNCTIONS_H
