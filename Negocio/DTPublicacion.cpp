//
// Created by Nicolás on 16/5/2026.
//

#include "DTPublicacion.h"

DTPublicacion::DTPublicacion() {
}

DTPublicacion::DTPublicacion(DTTipoPublicacion tipoPublicacion, string texto, int precio) {
    this->tipoPublicacion = tipoPublicacion;
    this->texto = texto;
    this->precio = precio;
}

int DTPublicacion::getPrecio() {
    return this->precio;
}

string DTPublicacion::getTexto() {
    return this->texto;
}

DTTipoPublicacion DTPublicacion::getTipoPublicacion() {
    return this->tipoPublicacion;
}
