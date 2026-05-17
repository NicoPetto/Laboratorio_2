//
// Created by Nicolás on 13/5/2026.
//

#ifndef LAB_2_ISISTEMA_H
#define LAB_2_ISISTEMA_H

#include <set>

#include "DTInmueble.h"
#include "DTPropietario.h"
#include "DTCliente.h"
#include "DTInmobiliaria.h"
#include "DTPublicacion.h"
#include "DTInmuebleAdministrado.h"
#include "DTInmobiliariaPublicacion.h"
#include "DTVisita.h"
#include "DTCasa.h"
#include "DTApartamento.h"


class ISistema {
    public:
    //AltaInmueble
    virtual set<DTPropietario*> obtenerPropietarios() = 0;
    // virtual void seleccionarPropietario(DTPropietario* propietario) = 0;
    virtual int registroInmueble(DTInmueble* inmueble, DTPropietario* propietario) = 0;


    //AltaPublicacion
    virtual set<DTInmobiliaria*> listarInmobiliarias() = 0;
    virtual set<DTInmuebleAdministrado*> obtenerInmueblesAdministrados(DTInmobiliaria * inmobiliaria) = 0;
    virtual DTPublicacion* finalizarAlta(DTInmuebleAdministrado * inmuebleAdministrado, string texto, int precio) = 0;

    //ConsultarPublicacion
    virtual set<DTInmobiliariaPublicacion*> seleccionarPublicacion(DTTipoPublicacion* tipo, int precioMin, int precioMax, DTInmueble* tipoInmueble) = 0;
    virtual DTInmueble* seleccionarInmueble(int codigo) = 0;
    virtual set<DTCliente*> obtenerClientes() = 0;
    virtual void agendarVisita(string nick, DTVisita* visita) = 0;

    //RepresentarPropietario
    // virtual set<DTInmobiliaria *> listarInmobiliarias() = 0;
    virtual set <DTPropietario*> verPropietariosInmobiliaria(string nick) = 0;
    virtual void representar(DTPropietario* propietario) = 0;


};

#endif //LAB_2_ISISTEMA_H
