//
//  main.cpp
//  uip-eda-functions-forum
//
//  Created by Zahir Gudiño on 3/8/16.
//  Copyright © 2016 Zahir Gudiño. All rights reserved.
//
//  Prob 4.
//

#include <iostream>
#include <cmath>

namespace PrimeOrNot {
    /**
     *  Valida si un numero es primo ( basado: https://github.com/zgudino/utils4-java )
     *
     *  @param number numero entero a validar
     *
     *  @return retorna verdadero si el numero entero es primo
     */
    inline bool is_prime(int number) {
        bool res = true;
        
        try {
            if (!(number > 0)) {
                throw std::invalid_argument("<< Excepcion >> Argumento `number` debe ser mayor a cero.");
            }
        } catch (std::invalid_argument& ex) {
            std::cout << ex.what() << std::endl;
        }
        
        
        if (number % (int) sqrt(number) == 0) {
            return !res;
        }
        else {
            for (int i = 2; i <= (int) sqrt(number); i++) {
                if (number % i == 0) {
                    return !res;
                }
            }
        }
        
        return res;
    }
}

int main(int argv, const char* argc[]) {
    int a = 389;
    
    std::cout << PrimeOrNot::is_prime(a) << std::endl;
    
    return 0;
}
