#include "CandyMaker.hpp"

// Constructor
CandyMaker::CandyMaker(const char* sugarSupplierName, const char* chocolateSupplierName)
    : SugarSupplier(sugarSupplierName), ChocolateSupplier(chocolateSupplierName) {
    currentCandy = nullptr;
}

// Destructor
CandyMaker::~CandyMaker() {
    delete[] currentCandy;
}

// Make Candy Function
void CandyMaker::makeCandy(const char* candyName) {
    delete[] currentCandy; // שחרור זיכרון ישן אם יש
    currentCandy = new char[strlen(candyName) + 1];
    strcpy(currentCandy, candyName);

    std::cout << "Using sugar from [" << SugarSupplier::getSugarName()
              << "] and chocolate from [" << ChocolateSupplier::getChocolateName()
              << "] to create [" << currentCandy << "]! 🍭" << std::endl;
}