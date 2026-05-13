//
// Created by Nicolás on 27/3/2026.
//

#ifndef LAB_0_PAGINAWEB_H
#define LAB_0_PAGINAWEB_H
#include "Publicacion.h"


class PaginaWeb:public Publicacion {
private:
    string url;
    string contenidoExtraido;
public:
    ~PaginaWeb() override;
    PaginaWeb(string DOI, string titulo, DTFecha fecha, string url, string contenidoExtraido);
    bool contienePalabra(string palabra) override;
};



#endif //LAB_0_PAGINAWEB_H
