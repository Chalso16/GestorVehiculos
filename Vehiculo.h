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
public:
    //constructores
    Vehiculo();
    Vehiculo(const string& marca, const string& modelo, const double& nivelEnergia);
    Vehiculo(const Vehiculo& vehiculo);
    virtual ~Vehiculo();
    //getters
    string getMarca() const;
    string getModelo() const;
    double getNivelEnergia() const;
    //setters
    void setMarca(const string& marca);
    void setModelo(const string& modelo);
    void setNivelEnergia(const double& nivelEnergia);
    //metodo virtual
    virtual double calcularAutonomia() const = 0;

};



#endif //GESTORVEHICULOS_VEHICULO_H
