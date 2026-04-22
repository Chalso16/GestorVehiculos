//
// Created by cbalb on 20/04/2026.
//

#include "VehiculoElectrico.h"

VehiculoElectrico::VehiculoElectrico(): Vehiculo("Tesla", "Model S", 70, 90 ,"0002BBB") {
}

VehiculoElectrico::VehiculoElectrico(const string& marca, const string& modelo, const double& nivelEnergia, const int& eficiencia, const string& matricula):Vehiculo(marca, modelo, nivelEnergia, eficiencia, matricula) {
}

//metodos override
double VehiculoElectrico::calcularAutonomia() const {
    return (1.3*getNivelEnergia())*getEficiencia()/10.0;
}

void VehiculoElectrico::consumirEnergia(const int &cantidad) {
    if (cantidad > getNivelEnergia()) {
        throw invalid_argument("Nivel_Energia menor a cantidad a consumir");
    }
    setNivelEnergia(getNivelEnergia() - cantidad);
}

//sobrecarga
//Sobrecargar el preIncremento para que recarge la bateria al 100%
VehiculoElectrico VehiculoElectrico::operator++() {
    setNivelEnergia(100);
    return *this;
}
ostream& operator<<(ostream& os, const VehiculoElectrico& vehiculoElectrico) {
    os << "->"<< vehiculoElectrico.getMarca() << " - " << vehiculoElectrico.getModelo()<< ":"<< endl;
    os << "->Matricula: "<< vehiculoElectrico.getMatricula() << endl;
    os << "->Eficiencia: " << vehiculoElectrico.getEficiencia()
    << " ->Nivel_Energia: " << vehiculoElectrico.getNivelEnergia()<<endl;
    os << "->Autonomia: " << vehiculoElectrico.calcularAutonomia();
    return os;
}
