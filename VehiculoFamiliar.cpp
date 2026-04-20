//
// Created by cbalb on 20/04/2026.
//

#include "VehiculoFamiliar.h"

VehiculoFamiliar::VehiculoFamiliar(): Vehiculo("", "", 0) {
}

VehiculoFamiliar::VehiculoFamiliar(const string& marca, const string& modelo, const double& nivelEnergia):Vehiculo(marca, modelo, nivelEnergia) {
}

VehiculoFamiliar::VehiculoFamiliar(const VehiculoFamiliar &vehiculoFamiliar) {
        //*this = VehiculoFamiliar(vehiculoFamiliar.getMarca(), vehiculoFamiliar.getModelo(), vehiculoFamiliar.getNivelEnergia());
        this->setMarca(vehiculoFamiliar.getMarca());
        this->setModelo(vehiculoFamiliar.getModelo());
        this->setNivelEnergia(vehiculoFamiliar.getNivelEnergia());
}

//metodos override
double VehiculoFamiliar::calcularAutonomia() const {
    return getNivelEnergia()*10;
}
