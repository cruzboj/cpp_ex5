#include "ChocolateSupplier.hpp"

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