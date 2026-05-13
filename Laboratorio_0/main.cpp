#include <iostream>

#include "Publicacion.h"
#include "Investigador.h"

#include "ArticuloRevista.h"
#include "Libro.h"
#include "PaginaWeb.h"

using namespace std;

int main() {

    DTFecha fecha1(15,5,2023);
    DTFecha fecha2(10,2,2024);
    DTFecha fecha3(20,8,2022);
    DTFecha fecha4(20,10,2024);

    const set<string> palabrasLibro1 = {"Diseno", "OOP", "Class"};
    const set<string> palabrasLibro2 = {"Diagramas", "UML", "Software", "Modelado"};

    Publicacion * a1 = new ArticuloRevista("10.1234/abc123", "Fundamentos de POO", fecha1, "Programacion Avanzada", "Introduccion a los principios fundamentales de la programacion orientada a objetos, explicando sus conceptos clave como clases, objetos, herencia y polimorfismo.");
    Publicacion * a2 = new ArticuloRevista("10.4567/jkl012","Utilidad de diagramas UML ",fecha2,"Modelado de Software","Ejercicio empirico de como los diagramas UML pueden ayudar en el proceso y documentacion de software, cubriendo los tipos mas importantes utilizados, como clases.");

    Publicacion * l1 = new Libro("10.2345/def456", "Patrones de Diseno en c++", fecha3, "Software Design",palabrasLibro1);
    Publicacion * l2 = new Libro("10.5678/mno345", "Guia de UML", fecha3, "IEEE",palabrasLibro2);

    Publicacion * w1 = new PaginaWeb("10.3456/ghi789", "Diagramas para Principiantes", fecha4, "www.umlparaprincipiantes.com", "En esta pagina web se presenta una guia completa sobre los diagramas UML, abordando los diagramas de casos de uso, de clases, de secuencia y de actividades.");

    cout << a1->getDT() << endl;
    cout << a2->getDT() << endl;
    cout << l1->getDT() << endl;
    cout << l2->getDT() << endl;
    cout << w1->getDT() << endl;

    cout << endl << endl;

    Investigador * i1 = new Investigador("0000-0003-1234-5678", "Carla Oliveri", "Universidad de la República");
    Investigador * i2 = new Investigador("0000-0001-8765-4321", "Alberto Santos", "Instituto Tecnico");

    cout << i1->toString() << endl;
    cout << i2->toString() << endl;

    cout << endl << endl;

    i1->addPublicacion(a1);
    i1->addPublicacion(a2);
    i1->addPublicacion(l2);
    i1->addPublicacion(w1);
    i2->addPublicacion(a1);
    i2->addPublicacion(l1);
    i2->addPublicacion(a2);

    cout << endl << endl;

    DTFecha fechaH(10,12,2023);
    set <string> listadoH = i1->listarPublicaciones(fechaH, "UML");
    cout << "Publicaciones encontradas posteriores a " << fechaH << " hechas por " << i1->getNombre() << endl;
    for (const string& doi : listadoH) {
        cout << doi << endl;
    }

    cout << endl << endl;

    i1->removePublicacion(a2);
    i2->removePublicacion(a2);
    delete a2;
    a2 = nullptr;

    cout << endl << endl;

    DTFecha fechaJ(1,1,2020);
    set <string> listadoJ = i1->listarPublicaciones(fechaJ, "UML");
    cout << "Publicaciones encontradas posteriores a " << fechaJ << " hechas por " << i1->getNombre() << endl;
    for (const string& doi : listadoJ) {
        cout << doi << endl;
    }

    cout << endl << endl;

    cout << a1->getDT() << endl;
    cout << l1->getDT() << endl;
    cout << l2->getDT() << endl;
    cout << w1->getDT() << endl;

    return 0;

}