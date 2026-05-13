//
// Created by Nicolás on 27/3/2026.
//

#include "Investigador.h"
#include "Publicacion.h"

/*La operación listarPublicaciones(desde: DTFecha, palabra: String)
de la clase Investigador obtiene el identificador de todas sus publicaciones que
contengan la palabra indicada y cuya fecha sea posterior al parámetro desde. Para ello, se
itera sobre el conjunto de publicaciones asociadas al investigador. Para cada publicación cuya
fecha sea posterior a la indicada en el parámetro desde, se llama a la operación
contienePalabra. Si esta devuelve verdadero, se invoca el getter del atributo DOI y se
acumulan estos valores en un conjunto, que se retorna al finalizar la iteración.*/

Investigador::Investigador(string ORCID,string nombre,string institucion) {
    this->ORCID = ORCID;
    this->nombre = nombre;
    this->institucion = institucion;
}
Investigador::~Investigador() {

}

string Investigador::toString() {
    return this->ORCID + "/" + this->institucion;
}

set<string> Investigador::listarPublicaciones(DTFecha desde, string palabra) {
    bool b=false;
    set<string> final;
    //recorre la lista de investigadores
    for (auto publicacion : this->publicaciones) {
        DTFecha a = publicacion->getFecha();
        if ( a.getAnio() > desde.getAnio()
            || (a.getAnio() == desde.getAnio() && a.getMes() > desde.getMes())
            || (a.getAnio() == desde.getAnio() && a.getMes() == desde.getMes() && a.getDia() > desde.getDia()) ) {

            b=publicacion->contienePalabra(palabra);
            if (b==true) {
                final.insert(publicacion->getDOI());
            }
        }
    }
    return final;
}

void Investigador::addPublicacion(Publicacion * publicacion) { //Por cuestiones de lógica, se establece que se linkea...
    publicaciones.insert(publicacion);                      //...primero la publicación al investigador
    publicacion->addInvestigador(this);
    cout << "Se agregó la publicacion con DOI " << publicacion->getDOI() << " al investigador " << getNombre() << endl;
}

void Investigador::removePublicacion(Publicacion* p) {
    auto it = publicaciones.find(p);
    if (it != publicaciones.end()) {
        publicaciones.erase(it);
    }
}

string Investigador::getNombre() {
    return this->nombre;
}
