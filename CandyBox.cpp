#include "CandyBox.hpp"

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