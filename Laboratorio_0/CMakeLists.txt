cmake_minimum_required(VERSION 4.2)
project(Lab_0)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab_0 main.cpp
        Publicacion.cpp
        Publicacion.h
        Investigador.cpp
        Investigador.h
        ArticuloRevista.cpp
        ArticuloRevista.h
        Libro.cpp
        Libro.h
        PaginaWeb.cpp
        PaginaWeb.h
        DTFecha.cpp
        DTFecha.h
        DTRefer.cpp
        DTRefer.h)
