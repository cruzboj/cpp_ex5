#ifndef CHOCOLATE_SUPPLIER_HPP
#define CHOCOLATE_SUPPLIER_HPP
#include <cstring>
#include <iostream>
#include "SugarSupplier.hpp"

class ChocolateSupplier : public virtual SugarSupplier {
    private:
        char* chocolateName;

    public:
        ChocolateSupplier(const char* supplierName);
        ~ChocolateSupplier();
        const char* getChocolateName() const { return chocolateName; };
        void supplyChocolate();
};

ChocolateSupplier::~ChocolateSupplier() {
    delete[] chocolateName;
}
ChocolateSupplier::ChocolateSupplier(const char* supplierName) : SugarSupplier(supplierName){
    int length = strlen(supplierName);
    chocolateName = new char[length + 1];
    strcpy(chocolateName, supplierName);
}
void ChocolateSupplier::supplyChocolate(){
    std::cout << "[" << chocolateName << "]" << " is supplying sugar." << std::endl;
}
#endif