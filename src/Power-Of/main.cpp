//
//  main.cpp
//  eda-fn_forum
//
//  Created by Zahir Gudiño on 3/8/16.
//  Copyright © 2016 Zahir Gudiño. All rights reserved.
//
//  Prob 5.
//

#include <iostream>

/**
 *  Numero entero repetido `n` veces por medio de recursividad
 *
 *  @param x numero entero
 *  @param n potencia
 *
 *  @return numero multiplicado `n` cantidad de veces
 */
inline double power(double x, int n) {
    if (n == 0) return 1;
    
    if (n % 2 == 0) {
        if (n == 2) return x * x;
        return power(power(x, n / 2), 2);
    }
    else {
        return x * power(x, n - 1);
    }
}

int main(int argc, const char* argv[]) {
    std::cout << "Numero 2^8: " << power(2, 8) << std::endl;
    std::cout << "Numero 4^2: " << power(4, 2) << std::endl;
    
    std::cout << "Numero 16^64: " << power(16, 64) << std::endl;
    std::cout << "\n";
    
    return 0;
}
