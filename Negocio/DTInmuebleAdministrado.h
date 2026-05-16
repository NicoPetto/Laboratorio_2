//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_DTINMUEBLEADMINISTRADO_H
#define LAB_2_DTINMUEBLEADMINISTRADO_H

#include <iostream>
using namespace std;

#include "DTFecha.h"

class DTInmuebleAdministrado {
private:
    int codigo;
    string direccion;
    DTFecha fecha;
public:
    DTInmuebleAdministrado();
    DTInmuebleAdministrado(int codigo, string direccion, DTFecha fecha);
    int getCodigo();
    string getDireccion();
    DTFecha getFecha();
};



#endif //LAB_2_DTINMUEBLEADMINISTRADO_H
