//
// Created by elize on 3/30/2026.
//
#include "Libro.h"

Libro::~Libro(){
cout<<"Libro:"<<this->titulo<<" destruido"<<endl;
}
Libro::Libro(string DOI, string titulo, DTFecha fecha, string editorial, set<string> palabrasDestacadas)
    : Publicacion(DOI, titulo, fecha), editorial(editorial), palabrasDestacadas(palabrasDestacadas)
{}
bool Libro::contienePalabra(string palabra){
   return palabrasDestacadas.find(palabra)!=palabrasDestacadas.end();
}
