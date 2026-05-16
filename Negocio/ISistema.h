//
// Created by Nicolás on 13/5/2026.
//

#ifndef LAB_2_ISISTEMA_H
#define LAB_2_ISISTEMA_H

#include <set>
#include <iostream>

#include "DTInmueble.h"
#include "DTPropietario.h"
#include "DTCliente.h"
#include "DTInmobiliaria.h"
#include "DTPublicacion.h"
#include "DTInmuebleAdministrado.h"
#include "DTInmobiliariaPublicacion.h"
#include "DTVisita.h"

using namespace std;

class ISistema {
    public:
    //AltaInmueble
    virtual set<DTPropietario*> obtenerPropietarios() = 0;
    virtual void seleccionarPropietario(DTPropietario* propietario) = 0;
    virtual void registroInmueble(DTInmueble* inmueble) = 0;
    virtual int finalizarAltaInmueble() = 0;

    //AltaPublicacion
    virtual set<DTInmobiliaria*> listarInmobiliarias() = 0;
    virtual set<DTInmuebleAdministrado*> seleccinarInmobiliaria(string nickname) = 0;
    virtual void seleccionarInmueble(int codigo, DTPublicacion* publicacion) = 0;

    //ConsultarPublicacion
    virtual set<DTInmobiliariaPublicacion*> seleccionarPublicacion(DTTipoPublicacion* tipo, int precioMin, int precioMax, DTInmueble* tipoInmueble) = 0;
    virtual DTInmueble* seleccionarInmueble(int codigo) = 0;
    virtual set<DTCliente> obtenerClientes() = 0;
    virtual void agendarVisita(string nick, DTVisita* visita) = 0;

    //RepresentarPropietario
    // virtual set<DTInmobiliaria *> listarInmobiliarias() = 0;
    virtual set <DTPropietario> verPropietariosInmobiliaria(string nick) = 0;
    virtual void representar(DTPropietario* propietario) = 0;


};

#endif //LAB_2_ISISTEMA_H
