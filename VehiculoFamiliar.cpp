//
// Created by cbalb on 20/04/2026.
//

#include "VehiculoFamiliar.h"

VehiculoFamiliar::VehiculoFamiliar(): Vehiculo("", "", 0, 1, "0000BBB") {
}

VehiculoFamiliar::VehiculoFamiliar(const string& marca, const string& modelo, const double& nivelEnergia, const int& eficiencia, const string& matricula):Vehiculo(marca, modelo, nivelEnergia, eficiencia, matricula) {
}

VehiculoFamiliar::VehiculoFamiliar(const VehiculoFamiliar &vehiculoFamiliar) {
    //*this = VehiculoFamiliar(vehiculoFamiliar.getMarca(), vehiculoFamiliar.getModelo(), vehiculoFamiliar.getNivelEnergia());
    this->setMarca(vehiculoFamiliar.getMarca());
    this->setModelo(vehiculoFamiliar.getModelo());
    this->setNivelEnergia(vehiculoFamiliar.getNivelEnergia());
    this->setEficiencia(vehiculoFamiliar.getEficiencia());
    this->setMatricula(vehiculoFamiliar.getMatricula());
}

//metodos override
double VehiculoFamiliar::calcularAutonomia() const {
    return getNivelEnergia()*10;
}
