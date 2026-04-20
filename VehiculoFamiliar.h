//
// Created by cbalb on 20/04/2026.
//

#ifndef GESTORVEHICULOS_VEHICULOFAMILIAR_H
#define GESTORVEHICULOS_VEHICULOFAMILIAR_H
#include "Vehiculo.h"


class VehiculoFamiliar :public Vehiculo{
private:
public:
    //constructor
    VehiculoFamiliar();
    VehiculoFamiliar(const string& marca, const string& modelo, const double& nivelEnergia, const int& eficiencia, const string& matricula);
    VehiculoFamiliar(const VehiculoFamiliar& vehiculoFamiliar);
    double calcularAutonomia() const override;
};



#endif //GESTORVEHICULOS_VEHICULOFAMILIAR_H
