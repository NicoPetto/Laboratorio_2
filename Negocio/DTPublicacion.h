//
// Created by Nicolás on 16/5/2026.
//

#ifndef LAB_2_DTPUBLICACION_H
#define LAB_2_DTPUBLICACION_H

#include "DTTipoPublicacion.h"
#include <iostream>
using namespace std;

class DTPublicacion {
private:
    DTTipoPublicacion tipoPublicacion;
    string texto;
    int precio;
public:
    DTPublicacion();
    DTPublicacion(DTTipoPublicacion tipoPublicacion, string texto, int precio);
    DTTipoPublicacion getTipoPublicacion();
    string getTexto();
    int getPrecio();
};



#endif //LAB_2_DTPUBLICACION_H
