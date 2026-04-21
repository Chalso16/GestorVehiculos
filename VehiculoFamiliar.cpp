//
// Created by cbalb on 20/04/2026.
//

#include "VehiculoFamiliar.h"

VehiculoFamiliar::VehiculoFamiliar(): Vehiculo("Seat", "Ibiza", 50, 65, "0001BBB") {
}

VehiculoFamiliar::VehiculoFamiliar(const string& marca, const string& modelo, const double& nivelEnergia, const int& eficiencia, const string& matricula):Vehiculo(marca, modelo, nivelEnergia, eficiencia, matricula) {
}


//metodos override
double VehiculoFamiliar::calcularAutonomia() const {
    return getNivelEnergia()*(getEficiencia()/10.0);
}
//sobrecarga
ostream& operator<<(ostream& os, const VehiculoFamiliar& vehiculoFamiliar) {
    os << "->"<< vehiculoFamiliar.getMarca() << " - " << vehiculoFamiliar.getModelo()<< ":"<< endl;
    os << "->Matricula: "<< vehiculoFamiliar.getMatricula() << endl;
    os << "->Eficiencia: " << vehiculoFamiliar.getEficiencia()
    << " ->Nivel_Energia: " << vehiculoFamiliar.getNivelEnergia()<<endl;
    os << "->Autonomia: " << vehiculoFamiliar.calcularAutonomia() << " Km";
}