//
// Created by elize on 3/30/2026.
//

#include "PaginaWeb.h"

PaginaWeb::~PaginaWeb(){
    cout<<"PaginaWeb destruida"<<endl;
}
PaginaWeb::PaginaWeb(string DOI, string titulo, DTFecha fecha, string url, string contenidoExtraido)
    : Publicacion(DOI, titulo, fecha),
      url(url),
      contenidoExtraido(contenidoExtraido)
{}
bool PaginaWeb::contienePalabra(string palabra) {
    return contenidoExtraido.find(palabra) != string::npos;
}
