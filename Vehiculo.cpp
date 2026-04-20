//
// Created by cbalb on 20/04/2026.
//

#include "Vehiculo.h"

//constructores
Vehiculo::Vehiculo(): marca(""),modelo(""), nivelEnergia(0){
}

Vehiculo::Vehiculo(const string& marca, const string& modelo, const double& nivelEnergia) {
    setMarca(marca);
    setModelo(modelo);
    setNivelEnergia(nivelEnergia);
}

Vehiculo::Vehiculo(const Vehiculo &vehiculo) {
    this->marca=vehiculo.marca;
    this->modelo=vehiculo.modelo;
    this->nivelEnergia=vehiculo.nivelEnergia;
}

Vehiculo::~Vehiculo() {
}

//getters
string Vehiculo::getMarca() const {
    return marca;
}

string Vehiculo::getModelo() const {
    return modelo;
}

double Vehiculo::getNivelEnergia() const {
    return nivelEnergia;
}

//setters
void Vehiculo::setMarca(const string &marca) {
    this->marca=marca;
}

void Vehiculo::setModelo(const string &modelo) {
    this->modelo=modelo;
}

void Vehiculo::setNivelEnergia(const double &nivelEnergia) {
    if (nivelEnergia<0 || nivelEnergia>100) {
        throw invalid_argument("Nivel de energia fuera de rango (0-100)");
    }
    this->nivelEnergia=nivelEnergia;
}
