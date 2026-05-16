//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_DTVISITA_H
#define LAB_2_DTVISITA_H

#include <iostream>
using namespace std;

#include "DTFecha.h"

class DTVisita {
private:
    DTFecha fecha;
    string formaContacto;
public:
    DTVisita();
    DTVisita(DTFecha fecha, string formaContacto);
    DTFecha getFecha();
    string getFormaContacto();
};



#endif //LAB_2_DTVISITA_H
