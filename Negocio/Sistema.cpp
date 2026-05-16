//
// Created by Nicolás on 13/5/2026.
//

#include "Sistema.h"
#include <set>

#include "DTInmueble.h"
#include "DTPropietario.h"
#include "DTCliente.h"
#include "DTInmobiliaria.h"
#include "DTPublicacion.h"
#include "DTInmuebleAdministrado.h"
#include "DTInmobiliariaPublicacion.h"
#include "DTVisita.h"


Sistema* Sistema::instancia = nullptr;

Sistema::Sistema() {

}

Sistema::~Sistema() {

}

//AltaImueble
set<DTPropietario*> Sistema::obtenerPropietarios() {
    set <DTPropietario*> propietarios;
    cout << "Se obtuvo una lista de propietarios";
    return propietarios;
};

void Sistema::seleccionarPropietario(DTPropietario* propietario) {
    cout << "Se seleccionó un propietario";
};

void Sistema::registroInmueble(DTInmueble* inmueble) {
    cout << "Se registró un inmueble";
};

int Sistema::finalizarAltaInmueble() {
    cout << "Completada alta del inmueble";
    return 10;
};

//AltaPublicacion
set<DTInmobiliaria*> Sistema::listarInmobiliarias() {
    set<DTInmobiliaria*> inmobiliarias;
    cout << "Se obtuvo una lista de inmobiliarias";
    return inmobiliarias;
};

set<DTInmuebleAdministrado*> Sistema::seleccinarInmobiliaria(string nickname) {
    set<DTInmuebleAdministrado*> inmueblesAdministrados;
    cout << "Se seleccionaron inmobiliarias";
    return inmueblesAdministrados;
};

void Sistema::seleccionarInmueble(int codigo, DTPublicacion* publicacion) {
    cout << "Se seleccionó un inmueble";
};

//ConsultarPublicacion
set<DTInmobiliariaPublicacion*> Sistema::seleccionarPublicacion(DTTipoPublicacion* tipo, int precioMin, int precioMax, DTInmueble* tipoInmueble) {
    set<DTInmobiliariaPublicacion*> inmobiliariaPublicaciones;
    cout << "Se seleccionaron publicaciones";
    return inmobiliariaPublicaciones;
};

DTInmueble* Sistema::seleccionarInmueble(int codigo) {
    DTInmueble* inmueble = new DTInmueble();
    cout << "Se seleccionó un inmueble";
    return inmueble;
};

set<DTCliente*> Sistema::obtenerClientes() {

};

void Sistema::agendarVisita(string nick, DTVisita* visita) {

};

//RepresentarPropietario
//set<DTInmobiliaria> listarInmobiliarias();
set <DTPropietario*> Sistema::verPropietariosInmobiliaria(string nick) {

};

void Sistema::representar(DTPropietario* propietario) {

};