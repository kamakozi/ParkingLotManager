//
// Created by ziga zoric on 17.05.25.
//

#include "Vehicles.h"
#include <string>
#include <utility>

Vehicles::Vehicles(std::string licensePlate, std::string ownerName, time_t entryTime,float mustPay):licensePlate(std::move(licensePlate)),ownerName(std::move(ownerName)),entryTime(std::move(entryTime)),mustPay(mustPay) {

}

std::string Vehicles::getLicensePlate() const {
    return licensePlate;
}

std::string Vehicles::getOwnerName() const {
    return ownerName;
}

time_t Vehicles::getEntryTime() const {
    return entryTime;
}

float Vehicles::getMustPay() const {
    return mustPay;
}



