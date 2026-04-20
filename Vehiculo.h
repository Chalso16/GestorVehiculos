//
// Created by cbalb on 20/04/2026.
//

#ifndef GESTORVEHICULOS_VEHICULO_H
#define GESTORVEHICULOS_VEHICULO_H
#include <iostream>
#include <stdexcept>
using namespace std;


class Vehiculo {
private:
    string marca;
    string modelo;
    double nivelEnergia;
    int eficiencia;
    string matricula;
public:
    //constructores
    Vehiculo();
    Vehiculo(const string& marca, const string& modelo, const double& nivelEnergia, const int& eficiencia, const string& matricula);
    Vehiculo(const Vehiculo& vehiculo);
    virtual ~Vehiculo();
    //getters
    string getMarca() const;
    string getModelo() const;
    double getNivelEnergia() const;
    int getEficiencia() const;
    string getMatricula() const;
    //setters
    void setMarca(const string& marca);
    void setModelo(const string& modelo);
    void setNivelEnergia(const double& nivelEnergia);
    void setEficiencia(const int& eficiencia);
    void setMatricula(const string& matricula);
    //metodo virtual
    virtual double calcularAutonomia() const = 0;

};



#endif //GESTORVEHICULOS_VEHICULO_H
