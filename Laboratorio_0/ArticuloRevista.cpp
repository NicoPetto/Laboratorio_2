//
// Created by elize on 3/30/2026.
//
#include "ArticuloRevista.h"


ArticuloRevista::~ArticuloRevista() {

    
    cout<<"Articulo Revista: "<<this->revista<<" destruido"<<endl;

}


ArticuloRevista::ArticuloRevista(string DOI, string titulo, DTFecha fecha, string revista, string extracto)
    : Publicacion(DOI, titulo, fecha)
{
        this->revista = revista;
        this->extracto = extracto;
}

bool ArticuloRevista::contienePalabra(string palabra) {
        return extracto.find(palabra) != string::npos;
}
