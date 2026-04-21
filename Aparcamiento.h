//
// Created by cbalb on 21/04/2026.
//

#ifndef GESTORVEHICULOS_APARCAMIENTO_H
#define GESTORVEHICULOS_APARCAMIENTO_H
#include <iostream>
#include <array>
#include <vector>
#include <stdexcept>
using namespace std;

template <typename T>
class Aparcamiento {
private:
    vector<T> parking;
    int plazasVacias;
public:
    //constructores
    Aparcamiento();
    Aparcamiento(vector<T> parking): parking(parking), plazasVacias(10){}
    Aparcamiento(const Aparcamiento& aparcamiento) {
        this->parking=aparcamiento.parking;
        this->plazasVacias=aparcamiento.plazasVacias;
    }
    ~Aparcamiento(){}
    //getters
    vector<T> getParking() const {
        return parking;
    }
    int getPlazasVacias() const {
        return plazasVacias;
    }
    //seters
    void setParking(const vector<T>& parking) {
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
        parking.push_back(vehiculo);
        plazasVacias--;
    }
    void removeVehiculo() {
        if (plazasVacias==10) {
            throw invalid_argument("Parking vacio");
        }
        parking.at(plazasVacias++) = T{};
    }
};



#endif //GESTORVEHICULOS_APARCAMIENTO_H
