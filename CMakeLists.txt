cmake_minimum_required(VERSION 4.1.2)
project(GestorVehiculos)

set(CMAKE_CXX_STANDARD 20)

add_executable(GestorVehiculos main.cpp
        Vehiculo.cpp
        Vehiculo.h
        VehiculoFamiliar.cpp
        VehiculoFamiliar.h
        VehiculoElectrico.cpp
        VehiculoElectrico.h
        Aparcamiento.cpp
        Aparcamiento.h
)
