#ifndef CHOCOLATE_SUPPLIER_HPP
#define CHOCOLATE_SUPPLIER_HPP
#include <cstring>
#include "SugarSupplier.hpp"

class ChocolateSupplier : public SugarSupplier {
    private:
        char* chocolateName;
    public:
        ChocolateSupplier(const char* supplierName);
        ~ChocolateSupplier();

};

ChocolateSupplier::~ChocolateSupplier() {
    delete[] chocolateName;
}
ChocolateSupplier::ChocolateSupplier(const char* supplierName) : SugarSupplier(supplierName){
    int length = strlen(supplierName);
    chocolateName = new char[length + 1];
    strcpy(chocolateName, supplierName);
}

#endif