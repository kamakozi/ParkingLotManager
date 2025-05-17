
#include "AddVehicle.h"
#include "../../ParkingManager.h"
#include "random"
#include <iostream>
#include "../../Vehicles/Car/Car.h"
#include "../../Vehicles/Bus/Bus.h"
#include "../../Vehicles/MotorBike/MotorBike.h"
#include <ctime>

Vehicles* AddVehicle::addVehicle() {
    std::cout << "Vehicle coming!" << std::endl;
    std::string licensePlate;
    std::string vehicleModel[3] = {"Car","Bus","Motorbike"};
    std::string alphabet[31] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","R","S","T","U","V","Z","1","2","3","4","5","6","7","8","9"};


    //Get license plate
    while (true){
    for (int i = 0; i < 6; i++) {
        int randomIndex = rand() % 31;
        licensePlate += alphabet[randomIndex];
    }

    bool duplicated = false;
    for (int i = 0;i < vehicles.size();i++) {
        if (licensePlate == vehicles[i]->getLicensePlate()) {
            duplicated = true;
            break;
        }
    }
        if (!duplicated) {
            break;
        }else
            std::cout << "Duplicated plate generated: " << licensePlate << ", regenerating..." << std::endl;

    }

    //Get name
    std::string name;
    while (true) {
        std::cout << "Enter name: ";
        std::cin.ignore();
        getline(std::cin,name);
        if (name.empty()) {
            std::cout << "Name can't be empty!" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000,'\n');
        }else
            break;
    }


    time_t now = time(nullptr);
    tm* localTime = localtime(&now);

    char buffer[6];
    strftime(buffer,sizeof(buffer), "%H:%M", localTime);

    time_t entryTime = time(nullptr);

    int randomNumberForModel = rand() % 3;
    std::string model = vehicleModel[randomNumberForModel];

    std::cout << "Vehicle entered!\n"
                 "Plate: " << licensePlate << "\n"
                 "Owner: " << name << "\n"
                 "Entry time: " << buffer << "\n"
                 "Model: " << model << std::endl;

    float mustPay = 0;

    if (model == "Car") {
        return  new Car(licensePlate,name,entryTime,mustPay,"Car");
    }else if (model == "Bus") {
        return new Bus(licensePlate,name,entryTime,mustPay,"Bus");
    }else
        return new MotorBike(licensePlate,name,entryTime,mustPay,"Motorbike");

}

