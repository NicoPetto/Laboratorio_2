//
// Created by Nicolás on 16/5/2026.
//

#include "DTUsuario.h"

DTUsuario::DTUsuario() {

}

DTUsuario::DTUsuario(string nickname, string password, string nombre, string email) {
    this->nickname = nickname;
    this->password = password;
    this->nombre = nombre;
    this->email = email;
}

DTUsuario::~DTUsuario() {

}

string DTUsuario::getNickname() {
    return this->nickname;
}

string DTUsuario::getPassword() {
    return this->password;
}

string DTUsuario::getNombre() {
    return this->nombre;
}

string DTUsuario::getEmail() {
    return this->email;
}
