//
//  main.cpp
//  eda-fn_forum
//
//  Created by Zahir Gudiño on 3/8/16.
//  Copyright © 2016 Zahir Gudiño. All rights reserved.
//
//  Prob 3.
//

#include <iostream>
#include <cmath>

namespace Geometry {
    enum Shapes { CIRCLE, SQUARE, RECTANGLE, TRIANGLE };
    /**
     *  Calcula el area de figuras geometricas
     *
     *  @param shapes  figura geometrica miembro de enumerador Geometry::Shapes
     *  @param lengths arreglo de 2 elementos, corresponde base, largo, altura o radio de la fig. geometrica
     *
     *  @return retorna el area correspondiente a la fig. geometrica
     */
    inline double area(Shapes shapes, double (&lengths)[2]) {
        double res = 0;
        int arr_sz = sizeof(lengths) / sizeof(*lengths);
        
        try {
            if (arr_sz < 1) throw std::invalid_argument("<< Excepcion >> Argumento `lengths` es vacio.");
            
            switch (shapes) {
                case CIRCLE:
                    res = M_PI * powf(lengths[0], 2);
                    break;
                    
                case SQUARE:
                    res = lengths[0] * lengths[0];
                    break;
                    
                case RECTANGLE:
                    res = lengths[0] * lengths[1];
                    break;
                    
                case TRIANGLE:
                    res = (lengths[0] * lengths[1]) / 2;
                    break;
                    
                default:
                    throw std::invalid_argument("<< Excepcion >> Argumento `shapes` de ser miembro de enumerador Geometry::Shapes.");
                    break;
            }
        }
        catch (std::invalid_argument& x_iarg) {
            std::cout << x_iarg.what() << std::endl;
        }
        
        return res;
    }
}

int main(int argc, const char * argv[]) {
    double len[2] = {498, 212};
    
    std::wcout.imbue(std::locale("en_US")); // asignar locale en_US
    /**
     Importante!
     
     Argumento `shapes` debe ser miembro del enumerador Geometry::Shapes. Esto con el fin de ser consistente en cualquier implementacion
     en cualquier implementacion.
     */
    std::wcout << "Area: " << Geometry::area(Geometry::TRIANGLE, len) << std::endl;
    std::cout << "\n";
    
    return 0;
}
