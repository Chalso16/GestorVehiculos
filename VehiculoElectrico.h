//
// Created by cbalb on 20/04/2026.
//

#ifndef GESTORVEHICULOS_VEHICULOELECTRICO_H
#define GESTORVEHICULOS_VEHICULOELECTRICO_H
#include "Vehiculo.h"


class VehiculoElectrico : public Vehiculo{
public:
    //constructor
    VehiculoElectrico();
    VehiculoElectrico(const string& marca, const string& modelo, const double& nivelEnergia, const int& eficiencia, const string& matricula);
    VehiculoElectrico(const VehiculoElectrico& vehiculoElectrico) = default;
    ~VehiculoElectrico() override = default;
    //metodos override
    double calcularAutonomia() const override;
    void consumirEnergia(const int &cantidad) override;
    //sobrecarga
    VehiculoElectrico operator++ ();
    friend ostream& operator<<(ostream& os, const VehiculoElectrico& vehiculoElectrico);
};



#endif //GESTORVEHICULOS_VEHICULOELECTRICO_H
