//
// Created by ziga zoric on 17.05.25.
//

#ifndef BUS_H
#define BUS_H
#include  "../Vehicles.h"
#include "string"



class Bus :public Vehicles{
protected:
    std::string model;

public:
    Bus(std::string licensePlate,std::string ownerName,time_t entryTime,float mustPay,std::string model);
    [[nodiscard]]std::string getModel() const;

};



#endif //BUS_H
