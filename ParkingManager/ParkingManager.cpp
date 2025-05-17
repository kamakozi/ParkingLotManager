//
// Created by ziga zoric on 17.05.25.
//

#include "ParkingManager.h"
#include <iostream>
#include "Functions/AddVehicle/AddVehicle.h"
#include "Vehicles/Vehicles.h"
#include "Functions/ParkingLot/CheckParkingLot.h"
#include "Functions/RemoveVehcile/RemoveVehicle.h"

void ParkingManager::run() {
    std::cout << "Welcome to the parking lot!" << std::endl;
    int chooser{0};
    while (chooser != 4) {
        std::cout << "1.Let vehicle inside!\n2.Check parking lot\n3.Expel vehicle\n4.Quit\nSelect: ";
        std::cin >> chooser;
        switch (chooser) {
            case 1: {
                AddVehicle av;
                Vehicles* newVehicle = av.addVehicle();
                vehicles.emplace_back(newVehicle);
                break;
            }
            case 2:
                CheckParkingLot cpl;
                cpl.checkParkingLot();
                break;
            case 3:
                RemoveVehicle rv;
                rv.removeVehicle();
                break;
            case 4:
                std::cout << "Quioting...." << std::endl;
                break;
        }
    }
}
