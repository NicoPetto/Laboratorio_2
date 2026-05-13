//
// Created by Nicolás on 27/3/2026.
//
#ifndef LAB_0_ARTICULOREVISTA_H
#define LAB_0_ARTICULOREVISTA_H
#include "Publicacion.h"

class ArticuloRevista: public Publicacion{
private:
    string revista;
    string extracto;
public:
    ~ArticuloRevista() override;
    ArticuloRevista(string DOI, string titulo, DTFecha fecha, string revista, string extracto);
    bool contienePalabra(string palabra) override;
protected:
};





#endif //LAB_0_ARTICULOREVISTA_H
