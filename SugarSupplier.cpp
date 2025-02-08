#include "SugarSupplier.hpp"
#include <iostream>

SugarSupplier::~SugarSupplier() {
    delete[] supplier;
}

SugarSupplier::SugarSupplier(const char* supplierName) {
    int length = strlen(supplierName);
    supplier = new char[length + 1];
    strcpy(supplier, supplierName);
}
void SugarSupplier::setSugarName(const char* newName) {
    delete[] supplier; // Free the old memory
    int length = strlen(newName);
    supplier = new char[length + 1]; // Allocate new memory
    strcpy(supplier, newName); // Copy the new name
}

void SugarSupplier::supplySugar(){
    std::cout << "[" << supplier << "]" << " is supplying sugar." << std::endl;
}