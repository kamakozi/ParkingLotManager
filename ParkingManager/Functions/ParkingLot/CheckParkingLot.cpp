
#include "CheckParkingLot.h"
#include "../../ParkingManager.h"
#include <iostream>
#include <ctime>

Vehicles* CheckParkingLot::checkParkingLot() {
    if (vehicles.empty()) {
        std::cout << "No cars inside tha parking lot!" << std::endl;
    }
    for (int i = 0; i < vehicles.size();i++) {
        time_t entry = vehicles[i]->getEntryTime();

        char buffer[20];
        strftime(buffer, sizeof(buffer), "%H:%M", localtime(&entry));  // or "%Y-%m-%d %H:%M" for full date

        std::cout << "Vehicle model: " << vehicles[i]->getModel()
                  << " || License plate: " << vehicles[i]->getLicensePlate()
                  << " || Owner name: " << vehicles[i]->getOwnerName()
                  << " || Entry time: " << buffer  // ✅ formatted time
                  << std::endl;
    }
}
