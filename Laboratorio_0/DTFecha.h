//
// Created by Nicolás on 27/3/2026.
//

#ifndef LAB_0_DTFECHA_H
#define LAB_0_DTFECHA_H
#include <iostream>
using namespace std;


class DTFecha {

private:
    int Dia;
    int Mes;
    int Anio;
public:
    DTFecha();
    DTFecha(int Dia, int Mes, int Anio);
    int getDia() const;
    int getMes() const;
    int getAnio() const;
    friend ostream& operator<<(ostream& os, const DTFecha& f);
};



#endif //LAB_0_DTFECHA_H
