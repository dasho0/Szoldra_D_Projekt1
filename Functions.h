#ifndef FUNCTIONS_H
#define FUNCTIONS_H

struct list_w {
    int data;      /**< Dane przechowywane w w�le */
    list_w* prev;    /**< Wska�nik na poprzedni w�ze� */
    list_w* next;    /**< Wska�nik na nast�pny w�ze� */

    /**
     * @brief Konstruktor w�z�a
     * @param value Warto�� przechowywana w w�le
     */
    list_w(int value);
};



/**
 * @class lista dwukierunkowa
 * @brief W tej klasie zostaje utworzona lista dwukierunkowa
 */
class listww {
private:
    list_w* head; /**< Wska�nik na pierwszy element listy */
    list_w* tail; /**< Wska�nik na ostatni element listy */
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
     * @brief Dodaje element na pocz�tek listy
     * @param value Warto�� do dodania
     */
    void element_f(int value);

    /**
     * @brief Dodaje element na koniec listy
     * @param value Warto�� do dodania
     */
    void element_l(int value);

    /**
     * @brief Dodaje element pod wskazany indeks
     * @param index Indeks, pod kt�ry ma zosta� dodany element
     * @param value Warto�� do dodania
     */
    void element_in(int index, int value);

    /**
     * @brief Funkcja usuwaj�ca pierwszy element z listy
     */
    void element_r_f();

    /**
     * @brief Funkcja usuwaj�ca ostatni element z listy
     */
    void element_r_l();

    /**
     * @brief Funkcja usuwaj�ca element z listy o podanym indeksie
     * @param index Indeks elementu do usuni�cia
     */
    void element_r_in(int index);

    /**
     * @brief Funkcja wy�wietlaj�ca list�
     */
    void list_show() const;

    /**
     * @brief Funkcja wy�wietlaj�ca list� w odwrotnej kolejno�ci
     */
    void list_show_reverse() const;

    /**
     * @brief Funkcja wy�wietlaj�ca nast�pny element po podanym elemencie
     * @param value Warto��, po kt�rej szukamy nast�pnego elementu
     */
    void show_element_next(int value) const;

    /**
     * @brief Funkcja wy�wietlaj�ca poprzedni element przed podanym elementem
     * @param value Warto��, przed kt�r� szukamy poprzedniego elementu
     */
    void show_element_prev(int value) const;

    /**
     * @brief Funkcja czyszcz�ca list�
     */
    void clear();
};


/**
* @brief Funkcja powtarzaj�ca program
*/
bool lauf();

#endif // !FUNCTIONS_H
