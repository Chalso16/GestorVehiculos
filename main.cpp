#include <iostream>
#include <memory>
#include <stdexcept>
#include <vector>
#include "VehiculoFamiliar.h"
#include "VehiculoElectrico.h"
#include "Aparcamiento.h"

using namespace std;

int main() {
    try {
        // 1. Gestión dinámica mediante shared_ptr (exclusivamente)
        shared_ptr<VehiculoFamiliar> familiar = make_shared<VehiculoFamiliar>("Toyota", "Corolla", 45.0, 70, "1234-BBB");
        shared_ptr<VehiculoElectrico> electrico = make_shared<VehiculoElectrico>("Tesla", "Model 3", 60.0, 95, "5678-CCC");

        // 2. Uso de la sobrecarga del operador
        cout << "---- ESTADO INICIAL DE LA FLOTA ----" << endl;
        cout << *familiar << endl << endl;
        cout << *electrico << endl << endl;

        // 3. Probar la sobrecarga del operador ++ (recarga al 100%) en el eléctrico
        cout << "Autonomia anted de la recarga: " << electrico->calcularAutonomia() << " km" << endl;
        cout << "Recargando el vehiculo electrico..." << endl;
        ++(*electrico);
        cout << "Nueva autonomia tras recarga: " << electrico->calcularAutonomia() << " km" << endl;

        // 4. Gestión del Aparcamiento mediante plantillas
        // Se almacenan punteros inteligentes a la clase base (Polimorfismo)
        Aparcamiento<shared_ptr<Vehiculo>> miAparcamiento;
        miAparcamiento.addVehiculo(familiar);
        miAparcamiento.addVehiculo(electrico);

        cout << "\nVehiculos en el aparcamiento: " << (10 - miAparcamiento.getPlazasVacias()) << endl;

        // 5. Prueba de consumo de energía y captura de excepciones
        cout << "\nIntentando realizar un viaje que consume 150 unidades de energia..." << endl;
        // Esto disparará el 'throw' si la energía es insuficiente
        familiar->consumirEnergia(150); //Lanzamos excdepcion a posta

    } catch (const invalid_argument& e) {
        // Bloque catch para capturar el error y mostrar el aviso solicitado
        cerr << "\nADVERTENCIA: El vehiculo no puede realizar el viaje. " << e.what() << endl;
    } catch (const exception& e) {
        // Captura de cualquier otro error inesperado
        cerr << "\nError inesperado en el sistema: " << e.what() << endl;
    }

    return 0;
}