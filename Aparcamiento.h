//
// Created by cbalb on 21/04/2026.
//

#ifndef GESTORVEHICULOS_APARCAMIENTO_H
#define GESTORVEHICULOS_APARCAMIENTO_H
#include <iostream>
#include <array>
#include <stdexcept>
using namespace std;

template <typename T>
class Aparcamiento {
private:
    array<T, 10> parking;
    int plazasVacias;
public:
    //constructores
    Aparcamiento();
    Aparcamiento(array<T, 10> parking): parking(parking), plazasVacias(10){}
    Aparcamiento(const Aparcamiento& aparcamiento) {
        this->parking=aparcamiento.parking;
        this->plazasVacias=aparcamiento.plazasVacias;
    }
    ~Aparcamiento(){}
    //getters
    array<T, 10> getParking() const {
        return parking;
    }
    int getPlazasVacias() const {
        return plazasVacias;
    }
    //seters
    void setParking(const array<T, 10>& parking) {
        this->parking=parking;
    }
    void setPlazasVacias(const int& plazasVacias) {
        if (plazasVacias<0 ||plazasVacias> 10) {
            throw invalid_argument("Plazas vacias superior a numero de plazas");
        }
    }
    //metodos generales
    void addVehiculo(const T& vehiculo) {
        if (plazasVacias==0) {
            throw invalid_argument("Parking lleno");
        }
        parking.at(--plazasVacias) = vehiculo;
    }
    void removeVehiculo() {
        if (plazasVacias==10) {
            throw invalid_argument("Parking vacio");
        }
        parking.at(plazasVacias++) = 0;
    }
};



#endif //GESTORVEHICULOS_APARCAMIENTO_H
