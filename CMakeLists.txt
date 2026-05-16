cmake_minimum_required(VERSION 4.2)
project(Lab_2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab_2 main.cpp
        Negocio/ISistema.h
        Negocio/Sistema.cpp
        Negocio/Sistema.h
        Presentacion/Menu.cpp
        Presentacion/Menu.h
        Presentacion/PantallaAltaInmueble.cpp
        Presentacion/PantallaAltaInmueble.h
        Presentacion/PantallaRepresentarPropietario.cpp
        Presentacion/PantallaRepresentarPropietario.h
        Presentacion/PantallaAltaPublicacion.cpp
        Presentacion/PantallaAltaPublicacion.h
        Presentacion/PantallaConsultarPublicaciones.cpp
        Presentacion/PantallaConsultarPublicaciones.h
        Negocio/DTInmueble.cpp
        Negocio/DTInmueble.h
        Negocio/DTCasa.cpp
        Negocio/DTCasa.h
        Negocio/DTApartamento.cpp
        Negocio/DTApartamento.h)
