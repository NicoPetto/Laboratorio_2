//
// Created by Nicolás on 16/5/2026.
//

#include "DTVisita.h"

DTVisita::DTVisita() {

}
DTVisita::DTVisita(DTFecha fecha, string formaContacto) {
    this->fecha = fecha;
    this->formaContacto = formaContacto;
}

DTFecha DTVisita::getFecha() {
    return fecha;
}

string DTVisita::getFormaContacto() {
    return formaContacto;
}