#include <string>
#include "MotorBike.h"

MotorBike::MotorBike(std::string licensePlate, std::string ownerName, time_t entryTime, float mustPay, std::string model):Vehicles(std::move(licensePlate),std::move(ownerName),std::move(entryTime),mustPay),model(std::move(model)) {

}

std::string MotorBike::getModel() const {
    return model;
}
