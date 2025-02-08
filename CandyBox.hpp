#ifndef CANDYBOX_HPP
#define CANDYBOX_HPP

#include <iostream>
#include <cstring>

template <typename T>
class CandyBox {
private:
    T* items;
    int capacity;
    int count;

public:
    CandyBox(int size);
    ~CandyBox();

    bool addItem(const T& newItem);
    bool removeItem(int index);
    void displayItems() const;
};

// Constructor
template <typename T>
CandyBox<T>::CandyBox(int size) : capacity(size), count(0) {
    items = new T[capacity];
}

// Destructor
template <typename T>
CandyBox<T>::~CandyBox() {
    delete[] items;
}

// Add Item
template <typename T>
bool CandyBox<T>::addItem(const T& newItem) {
    if (count >= capacity) return false;
    items[count++] = newItem;
    return true;
}

// Remove Item
template <typename T>
bool CandyBox<T>::removeItem(int index) {
    if (index < 0 || index >= count) return false;
    
    // Shift left approach
    for (int i = index; i < count - 1; ++i) {
        items[i] = items[i + 1];
    }
    count--;
    return true;
}

// Display Items
template <typename T>
void CandyBox<T>::displayItems() const {
    for (int i = 0; i < count; ++i) {
        std::cout << items[i] << std::endl;
    }
}


class Candy {
    private:
        char* name;
    
    public:
        Candy() { // קונסטרקטור ברירת מחדל
            name = new char[1];
            name[0] = '\0'; // שם ריק
        }
    
        Candy(const char* candyName) {
            name = new char[strlen(candyName) + 1];
            strcpy(name, candyName);
        }
    
        Candy(const Candy& other) { // Copy constructor
            name = new char[strlen(other.name) + 1];
            strcpy(name, other.name);
        }
    
        Candy& operator=(const Candy& other) { // Assignment operator
            if (this != &other) {
                delete[] name;
                name = new char[strlen(other.name) + 1];
                strcpy(name, other.name);
            }
            return *this;
        }
    
        ~Candy() { delete[] name; }
    
        friend std::ostream& operator<<(std::ostream& os, const Candy& c) {
            os << c.name;
            return os;
        }
    };

#endif
