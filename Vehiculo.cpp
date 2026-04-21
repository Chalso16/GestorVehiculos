//
// Created by cbalb on 20/04/2026.
//

#include "Vehiculo.h"

//constructores
Vehiculo::Vehiculo(): marca("Seat"),modelo("Ibiza"), nivelEnergia(25), eficiencia(65), matricula("0001BBB"){
}

Vehiculo::Vehiculo(const string& marca, const string& modelo, const double& nivelEnergia, const int& eficiencia, const string& matricula):nivelEnergia(0), eficiencia(1) {
    setMarca(marca);
    setModelo(modelo);
    setNivelEnergia(nivelEnergia);
    setEficiencia(eficiencia);
    setMatricula(matricula);
}

Vehiculo::Vehiculo(const Vehiculo &vehiculo) {
    this->marca=vehiculo.marca;
    this->modelo=vehiculo.modelo;
    this->nivelEnergia=vehiculo.nivelEnergia;
    this->eficiencia=vehiculo.eficiencia;
    this->matricula=vehiculo.matricula;
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

int Vehiculo::getEficiencia() const {
    return eficiencia;
}

string Vehiculo::getMatricula() const {
    return matricula;
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

void Vehiculo::setEficiencia(const int &eficiencia) {
    if (eficiencia<1 || eficiencia > 100) {
        throw invalid_argument("Eficiencia fuera de rango (1-100)");
    }
    this->eficiencia=eficiencia;
}

void Vehiculo::setMatricula(const string &matricula) {
    if (matricula.size()!=8) {
        throw invalid_argument("Matricula con formato erroneo");
    }
    this->matricula=matricula;
}

