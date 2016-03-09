//
//  main.cpp
//  eda-fn_forum
//
//  Created by Zahir Gudiño on 3/9/16.
//  Copyright © 2016 Zahir Gudiño. All rights reserved.
//
//  Prob 2.
//

#include <iostream>
#include <string>

namespace Letter {
    enum Vowels { A = 65, E = 69, I = 73, O = 79, U = 85 };
    
    inline bool is_vowel(char (&char_ptr)) {
        std::string str = &char_ptr; // referenciamos el argumento
        int dstr = std::toupper((int) str[0]); // valor decimal segun ASCII del 1er. caracter
        
        bool r = false;
        
        /**
         Transforma el caracter a mayuscula es solo por conveniencia. Sin embargo, al evaluar el input del
         usuario contra un conjunto de variables es tedioso(mayusculas vs. minisculas).
         Ni hablemos de expresiones regulares.
         
         Ideal seria iterar por los miembros de un enumerado. Mucho mejor una lista!
         */
        switch (dstr) {
            case A:
                r |= !r;
                break;
                
            case E:
                r |= !r;
                break;
                
            case I:
                r |= !r;
                break;
                
            case O:
                r |= !r;
                break;
                
            case U:
                r |= !r;
                break;
                
            default:
                break;
        }
        
        return r;
    }
}


int main(int argc, const char* argv[]) {
    char a[1];
    
    a[0] = 'Oa';
    
    std::cout << Letter::is_vowel(a[0]) << std::endl;
    
    return 0;
}
