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
    DTPropietario * p1 = new DTPropietario("Brou", "099927270");
    DTPropietario * p2 = new DTPropietario("Santander", "098765432");
    DTPropietario * p3 = new DTPropietario("Caritas", "091234567");
    p1->setNickname("1");
    p1->setNombre("Propietario1");
    p1->setEmail("p1@gmail.com");
    p2->setNickname("2");
    p2->setNombre("Propietario2");
    p2->setEmail("p2@gmail.com");
    p3->setNickname("3");
    p3->setNombre("Propietario3");
    p3->setEmail("p3@gmail.com");
    propietarios.insert(p1);
    propietarios.insert(p2);
    propietarios.insert(p3);
    return propietarios;
};

// void Sistema::seleccionarPropietario(DTPropietario* propietario) {
//     cout << "Se seleccionó un propietario con nick: ";
//     propietario->getNickname();
// };

void Sistema::registroInmueble(DTInmueble* inmueble, DTPropietario* propietario) {
    cout << "Se registró un inmueble " << inmueble->getCodigo();
    cout << " con datos: " << endl;
    cout << "Direccion: " << inmueble->getDireccion() << endl;
    cout << "Superficie: "<< inmueble->getSuperficie() << endl;
    cout << " perteneciente al propietario " << propietario->getNickname();
    cout << endl;
};

int Sistema::finalizarAltaInmueble() {
    cout << "Completada alta del inmueble: ";
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
    set<DTCliente*> clientes;
    cout << "Se obtuvieron clientes";
    return clientes;
};

void Sistema::agendarVisita(string nick, DTVisita* visita) {
    cout << "Se agendaron visitas";
};

//RepresentarPropietario
//set<DTInmobiliaria> listarInmobiliarias();
set <DTPropietario*> Sistema::verPropietariosInmobiliaria(string nick) {
    set<DTPropietario*> propietarios;
    cout << "Se obtuvieron propietarios para inmobiliarias";
    return propietarios;
};

void Sistema::representar(DTPropietario* propietario) {
    cout << "Se representó un propietario";
};

Sistema* Sistema::getInstancia() {
    if (Sistema::instancia == nullptr) {
        Sistema::instancia = new Sistema();
    }
    return Sistema::instancia;
}