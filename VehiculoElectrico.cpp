//
// Created by cbalb on 20/04/2026.
//

#include "VehiculoElectrico.h"

VehiculoElectrico::VehiculoElectrico(): Vehiculo("", "", 0, 1, "0000BBB") {
}

VehiculoElectrico::VehiculoElectrico(const string& marca, const string& modelo, const double& nivelEnergia, const int& eficiencia, const string& matricula):Vehiculo(marca, modelo, nivelEnergia, eficiencia, matricula) {
}

VehiculoElectrico::~VehiculoElectrico() {
}


//metodos override
double VehiculoElectrico::calcularAutonomia() const {
    return (1.3*getNivelEnergia())*getEficiencia()/10.0;
}