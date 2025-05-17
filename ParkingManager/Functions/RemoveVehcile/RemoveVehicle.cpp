#include "../../ParkingManager.h"
#include <iostream>
#include "RemoveVehicle.h"
#include <ctime>

void RemoveVehicle::removeVehicle() {
    for (int i = 0;i < vehicles.size();i++) {
        std::cout << "Vehicle model: " << vehicles[i]->getModel() << " || License plate: " << vehicles[i]->getLicensePlate() << " || Owner name: " << vehicles[i]->getOwnerName() << " || Entry time: " << vehicles[i]->getEntryTime() << std::endl;
    }

    bool found = false;
    std::string licensePlate;
    while (true) {
        std::cout << "Enter license plate to remove the vehicle: ";
        std::cin >> licensePlate;
        if (licensePlate.empty()) {
            std::cout << "Plate can't be empty!" << std::endl;
        }else
            break;
    }
    float costPerMin = 3.99;
    for (int i = 0; i < vehicles.size();i++) {
        if (licensePlate == vehicles[i]->getLicensePlate()) {
            time_t endTime = time(nullptr);
            time_t entryTime = vehicles[i]->getEntryTime();
            double duration = difftime(endTime,entryTime);
            int minutes = static_cast<int>(duration) / 60;
            int seconds = static_cast<int>(duration) % 60;

            std::cout << "Vehicle was parked for " << minutes << " minutes and " << seconds << " seconds.\nTotal cost: " << minutes * costPerMin << "€" << std::endl;

            vehicles.erase(vehicles.begin() + i);
            std::cout << "Vehicle removed!" << std::endl;
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "Vehicle not found!" << std::endl;
    }
}

