//
// Created by Nicolás on 27/3/2026.
//

#ifndef LAB_0_INVESTIGADOR_H
#define LAB_0_INVESTIGADOR_H

#include <string>
#include <list>
#include <set>
using namespace std;

#include "DTFecha.h"

class Publicacion;

class Investigador {
private:
    string ORCID;
    string nombre;
    string institucion;
    set <Publicacion*> publicaciones;
public:
    Investigador();
    ~Investigador();
    Investigador(string ORCID, string nombre, string institucion);
    string toString();

    string getNombre();

    void addPublicacion(Publicacion * publicacion);
    set<string> listarPublicaciones(DTFecha desde, string palabra);
    void pruebas();
    void removePublicacion(Publicacion* p);

};



#endif //LAB_0_INVESTIGADOR_H
