#include <iostream>

#include "mat.hpp"

std::string ariel::mat(int col, int row , char sym1, char sym2){
    if (col % 2 == 0 || row % 2 == 0 || sym1 < 0 || sym2 < 0){
        throw std::invalid_argument("invalid input argument: can't be even or negetive numbers!");
    }
    
    return " ";
}