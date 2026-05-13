//
// Created by Nicolás on 27/3/2026.
//

#ifndef LAB_0_DTREFER_H
#define LAB_0_DTREFER_H
#include "DTFecha.h"
#include <set>
using namespace std;


class DTRefer {
private:
    string DOI;
    string titulo;
    DTFecha fecha;
    set<string> autores;

public:
    DTRefer(string DOI, string titulo, DTFecha fecha, set<string> autores);
    string getDOI() const;
    string getTitulo() const;
    DTFecha getFecha() const;
    set<string> getAutores() const;

    friend ostream& operator<<(ostream& os, const DTRefer& dt);

};



#endif //LAB_0_DTREFER_H
