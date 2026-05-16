//
// Created by Nicolás on 13/5/2026.
//

#ifndef LAB_2_SISTEMA_H
#define LAB_2_SISTEMA_H
#include "ISistema.h"
using namespace std;

#include <set>


class Sistema : public ISistema {

private:
    Sistema();
    static Sistema* instancia;

public:
    virtual ~Sistema();
    static Sistema* getInstancia();

    //AltaImueble
    set<DTPropietario*> obtenerPropietarios();
    void seleccionarPropietario(DTPropietario* propietario);
    void registroInmueble(DTInmueble* inmueble);
    int finalizarAltaInmueble();

    //AltaPublicacion
    set<DTInmobiliaria*> listarInmobiliarias();
    set<DTInmuebleAdministrado*> seleccinarInmobiliaria(string nickname);
    void seleccionarInmueble(int codigo, DTPublicacion* publicacion);

    //ConsultarPublicacion
    set<DTInmobiliariaPublicacion*> seleccionarPublicacion(DTTipoPublicacion* tipo, int precioMin, int precioMax, DTInmueble* tipoInmueble) = 0;
    DTInmueble* seleccionarInmueble(int codigo);
    set<DTCliente> obtenerClientes();
    void agendarVisita(string nick, DTVisita* visita);

    //RepresentarPropietario
    //set<DTInmobiliaria> listarInmobiliarias();
    set <DTPropietario> verPropietariosInmobiliaria(string nick);
    void representar(DTPropietario* propietario);

};



#endif //LAB_2_SISTEMA_H
