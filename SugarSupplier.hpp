#ifndef SUGARSUPPLIER_HPP
#define SUGARSUPPLIER_HPP
using namespace std;
#include <cstring>

class SugarSupplier{
    private:
        char* supplier;

    public:
        SugarSupplier(const char* supplierName); // Only declare it here
        ~SugarSupplier();
        const char* getSugarName() const {return supplier;};
        void setSugarName(const char* newName);
        void supplySugar();
};

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

#endif