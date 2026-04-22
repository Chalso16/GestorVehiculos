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
    VehiculoFamiliar(const VehiculoFamiliar& vehiculoFamiliar) = default;
    ~VehiculoFamiliar() override = default;
    //metodos override
    double calcularAutonomia() const override;
    void consumirEnergia(const int &cantidad) override;
    //sobrecarga
    friend ostream& operator<<(ostream& os, const VehiculoFamiliar& vehiculoFamiliar);

};



#endif //GESTORVEHICULOS_VEHICULOFAMILIAR_H
