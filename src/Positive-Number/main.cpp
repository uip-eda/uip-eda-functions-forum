//
//  main.cpp
//  uip-eda-functions-forum
//
//  Created by Zahir Gudiño on 3/9/16.
//  Copyright © 2016 Zahir Gudiño. All rights reserved.
//
//  Prob 1.

#include <iostream>

/**
 *  Valida si un numero entero es positivo o negativo
 *
 *  @param number numero entero
 *
 *  @return retorna caracter con denotacion 'P' positivo o 'N' negativo
 */
inline char is_positive(int number) {
    if (number == 0 || number < 0) return 'N';
    return 'P';
}

int main(int argc, const char* argv[]) {
    int milli = 10e-3;
    int tera = 10e12;
    
    std::wcout << "Unidad Metrica - Mili, " << milli << ", positivo? " << is_positive(milli) << std::endl;
    std::cout << "Unidad Metrica - Tera, " << tera << ", positivo? " << is_positive(tera) << std::endl;
    std::cout << "\n";
    
    return 0;
}
