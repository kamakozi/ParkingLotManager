#include <string>
#include "Bus.h"
#include "../Vehicles.h"
Bus::Bus(std::string licensePlate, std::string ownerName, time_t entryTime, float mustPay, std::string model):Vehicles(std::move(licensePlate),std::move(ownerName),std::move(entryTime),mustPay),model(std::move(model)) {}
std::string Bus::getModel() const {
    return model;
}
