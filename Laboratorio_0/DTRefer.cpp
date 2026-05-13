//
// Created by Nicolás on 27/3/2026.
//

#include "DTRefer.h"
#include "DTFecha.h"


DTRefer::DTRefer(string DOI, string titulo, DTFecha fecha, set<string> autores)
    : DOI(DOI), titulo(titulo), fecha(fecha), autores(autores)
{}
string DTRefer:: getDOI() const {
return this->DOI;
}
string DTRefer::getTitulo() const {
return this->titulo;
}
DTFecha DTRefer:: getFecha() const {
    return this->fecha;
}
set<string> DTRefer::getAutores() const {
return this->autores;
}

ostream& operator<<(ostream& os, const DTRefer& dt) {
    os << dt.getDOI() << "->" << dt.getTitulo() << "(" << dt.getFecha() << ")/";
    set<string> autores = dt.getAutores();
    if (autores.size() == 0) {
            cout << "No hay autores asociados";
    } else {
       for (auto it = autores.begin(); it != autores.end(); ++it) {
            os << *it;
            if (next(it) != autores.end()) {
                os << ",";
            }
        }
    }


    return os;
}
