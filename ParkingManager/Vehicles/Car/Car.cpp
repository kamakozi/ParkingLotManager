//
// Created by ziga zoric on 17.05.25.
//
#include <string>
#include <utility>
#include "Car.h"

Car::Car(std::string licensePlate, std::string ownerName, time_t entryTime, float mustPay, std::string model):Vehicles(std::move(licensePlate),std::move(ownerName),std::move(entryTime),mustPay),model(std::move(model)) {}
std::string Car::getModel() const {
    return model;
}
