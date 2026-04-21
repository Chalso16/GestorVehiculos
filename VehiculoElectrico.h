//
// Created by cbalb on 20/04/2026.
//

#ifndef GESTORVEHICULOS_VEHICULOELECTRICO_H
#define GESTORVEHICULOS_VEHICULOELECTRICO_H
#include "Vehiculo.h"


class VehiculoElectrico : public Vehiculo{
    //constructor
    VehiculoElectrico();
    VehiculoElectrico(const string& marca, const string& modelo, const double& nivelEnergia, const int& eficiencia, const string& matricula);
    VehiculoElectrico(const VehiculoElectrico& vehiculoElectrico) = default;
    ~VehiculoElectrico() override;
    //metodos override
    double calcularAutonomia() const override;
};



#endif //GESTORVEHICULOS_VEHICULOELECTRICO_H
