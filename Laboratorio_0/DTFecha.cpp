//
// Created by Nicolás on 27/3/2026.
//

#include "DTFecha.h"

DTFecha::DTFecha() {

}

int DTFecha::getDia() const {
     return this->Dia;
}

int DTFecha::getMes() const {
     return this->Mes;
}
int DTFecha::getAnio() const {
     return this->Anio;
}

DTFecha::DTFecha(int Dia, int Mes, int Anio) {
     this->Dia = Dia;
     this->Mes = Mes;
     this->Anio = Anio;
}

ostream& operator<<(ostream& os, const DTFecha& f) {
     os << f.getDia() << "/" << f.getMes() << "/" << f.getAnio();
     return os;
}
