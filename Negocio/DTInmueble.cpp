//
// Created by Nicolás on 16/5/2026.
//

#include "DTInmueble.h"

DTInmueble::DTInmueble() {

}

DTInmueble::DTInmueble(int codigo, string direccion, int numeroPuerta, int superficie, int AnioConstruccion) {
    this->codigo = codigo;
    this->direccion = direccion;
    this->numeroPuerta = numeroPuerta;
    this->superficie = superficie;
    this->AnioConstruccion = AnioConstruccion;
};

DTInmueble::~DTInmueble() {

}

int DTInmueble::getCodigo() {
    return this->codigo;
}

string DTInmueble::getDireccion() {
    return this->direccion;
}

int DTInmueble::getNumeroPuerta() {
    return this->numeroPuerta;
}

int DTInmueble::getSuperficie() {
    return this->superficie;
}

int DTInmueble::getAnioConstruccion() {
    return this->AnioConstruccion;
}
