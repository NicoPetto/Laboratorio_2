//
// Created by Nicolás on 16/5/2026.
//

#include "DTInmuebleAdministrado.h"

DTInmuebleAdministrado::DTInmuebleAdministrado() {

}

DTInmuebleAdministrado::DTInmuebleAdministrado(int codigo, string direccion, DTFecha fecha) {
    this->codigo = codigo;
    this->direccion = direccion;
    this->fecha = fecha;
}

int DTInmuebleAdministrado::getCodigo() {
    return this->codigo;
}

string DTInmuebleAdministrado::getDireccion() {
    return this->direccion;
}

DTFecha DTInmuebleAdministrado::getFecha() {
    return this->fecha;
}
