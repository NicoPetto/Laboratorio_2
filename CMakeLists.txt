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
        Negocio/DTApartamento.h
        Negocio/DTTipoTecho.h
        Negocio/DTUsuario.cpp
        Negocio/DTUsuario.h
        Negocio/DTCliente.cpp
        Negocio/DTCliente.h
        Negocio/DTPropietario.cpp
        Negocio/DTPropietario.h
        Negocio/DTInmobiliaria.cpp
        Negocio/DTInmobiliaria.h
        Negocio/DTPublicacion.cpp
        Negocio/DTPublicacion.h
        Negocio/DTTipoPublicacion.h
        Negocio/DTFecha.cpp
        Negocio/DTFecha.h
        Negocio/DTInmuebleAdministrado.cpp
        Negocio/DTInmuebleAdministrado.h
        Negocio/DTInmobiliariaPublicacion.cpp
        Negocio/DTInmobiliariaPublicacion.h
        Negocio/DTVisita.cpp
        Negocio/DTVisita.h
)
