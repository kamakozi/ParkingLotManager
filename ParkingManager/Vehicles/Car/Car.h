//
// Created by ziga zoric on 17.05.25.
//

#ifndef CAR_H
#define CAR_H
#include "../Vehicles.h"
#include <string>


class Car:public Vehicles {
protected:
    std::string model;

public:
    Car(std::string licensePlate,std::string ownerName, time_t entryType,float mustPay,std::string model);
    [[nodiscard]] std::string getModel()const;
};



#endif //CAR_H
