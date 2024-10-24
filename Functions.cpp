#include <iostream>
#include <string>
#include "Functions.h"

list_w::list_w(int value) : data(value), prev(nullptr), next(nullptr) {}

listww::listww() : head(nullptr), tail(nullptr), size(0) {}
listww::~listww() {
    clear();
}

void listww::element_f(int value) {
    list_w* new_w = new list_w(value);
    if (!head) { // Lista jest pusta
        head = tail = new_w;
    }
    else {
        new_w->next = head;
        head->prev = new_w;
        head = new_w;
    }
    size++;
}

void listww::element_l(int value) {
    list_w* new_w = new list_w(value);
    if (!tail) { // Lista jest pusta
        head = tail = new_w;
    }
    else {
        tail->next = new_w;
        new_w->prev = tail;
        tail = new_w;
    }
    size++;
}

void listww::element_in(int index, int value) {
    if (index < 0 || index > size) {
        std::cerr << "Nieprawidlowy indeks!\n";
        return;
    }

    if (index == 0) {
        element_f(value);
        return;
    }
    if (index == size) {
        element_l(value);
        return;
    }

    list_w* new_w = new list_w(value);
    list_w* cur_w = head;
    for (int i = 0; i < index; ++i)
        cur_w = cur_w->next;

    new_w->prev = cur_w->prev;
    new_w->next = cur_w;
    cur_w->prev->next = new_w;
    cur_w->prev = new_w;
    size++;
}

void listww::element_r_f() {
    if (!head) {
        std::cerr << "Lista jest pusta!\n";
        return;
    }

    list_w* temp = head;
    if (head == tail) { // Jeden element w liœcie
        head = tail = nullptr;
    }
    else {
        head = head->next;
        head->prev = nullptr;
    }
    delete temp;
    size--;
}

void listww::element_r_l() {
    if (!tail) {
        std::cerr << "Lista jest pusta!\n";
        return;
    }

    list_w* temp = tail;
    if (head == tail) { // Jeden element w liœcie
        head = tail = nullptr;
    }
    else {
        tail = tail->prev;
        tail->next = nullptr;
    }
    delete temp;
    size--;
}

void listww::element_r_in(int index) {
    if (index < 0 || index >= size) {
        std::cerr << "Nieprawid³owy indeks!\n";
        return;
    }

    if (index == 0) {
        element_r_f();
        return;
    }
    if (index == size - 1) {
        element_r_l();
        return;
    }

    list_w* cur_w = head;
    for (int i = 0; i < index; ++i)
        cur_w = cur_w->next;

    cur_w->prev->next = cur_w->next;
    cur_w->next->prev = cur_w->prev;
    delete cur_w;
    size--;
}

void listww::list_show() const {
    list_w* cur_w = head;
    std::cout << "Lista (przod -> tyl): ";
    while (cur_w) {
        std::cout << cur_w->data << " ";
        cur_w = cur_w->next;
    }
    std::cout << "\n";
}

void listww::list_show_reverse() const {
    list_w* cur_w = tail;
    std::cout << "Lista (tyl -> przod): ";
    while (cur_w) {
        std::cout << cur_w->data << " ";
        cur_w = cur_w->prev;
    }
    std::cout << "\n";
}

void listww::show_element_next(int value) const {
    list_w* cur_w = head;
    while (cur_w && cur_w->data != value)
        cur_w = cur_w->next;
    if (cur_w && cur_w->next)
        std::cout << "Nastepny element po " << value << ": " << cur_w->next->data << "\n";
    else
        std::cout << "Brak nastepnego elementu dla " << value << "\n";
}

void listww::show_element_prev(int value) const {
    list_w* cur_w = head;
    while (cur_w && cur_w->data != value)
        cur_w = cur_w->next;
    if (cur_w && cur_w->prev)
        std::cout << "Poprzedni element przed " << value << ": " << cur_w->prev->data << "\n";
    else
        std::cout << "Brak poprzedniego elementu dla " << value << "\n";
}

void listww::clear() {
    list_w* cur_w = head;
    while (cur_w) {
        list_w* temp = cur_w;
        cur_w = cur_w->next;
        delete temp;
    }
    head = tail = nullptr;
    size = 0;
}

bool lauf()
{
    std::string input;
    std::cout << "Do you want to repeat? (typ yes ocontinue, anything else to stop) ";
    std::cin >> input;
    do {
        if (input == "Yes" || input == "yes") {
            return true;
        }
        else if (input == "no" || input == "No") {
            return false;
        }
        else {
            std::cout << "insert ONLY yes or no";
            std::cin >> input;
        }
    } while (input != "Yes" || input != "yes" || input != "No" || input != "no");

}