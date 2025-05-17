//
// Created by ziga zoric on 17.05.25.
//

#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include "../Vehicles.h"
#include <string>


class MotorBike:public Vehicles{
protected:
    std::string model;

public:
    MotorBike(std::string licensePlate,std::string ownerName,time_t entryTime,float mustPay,std::string model);
    [[nodiscard]] std::string getModel()const;
};



#endif //MOTORBIKE_H
