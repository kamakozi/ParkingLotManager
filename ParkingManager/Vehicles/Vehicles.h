//
// Created by ziga zoric on 17.05.25.
//

#ifndef VEHICLES_H
#define VEHICLES_H
#include <string>



class Vehicles {
protected:
    std::string licensePlate;
    std::string ownerName;
    time_t entryTime;
    float mustPay;

public:
    virtual std::string getModel() const = 0;
    Vehicles(std::string licensePlate,std::string ownerName,time_t entryTime,float mustPay);
    [[nodiscard]] std::string getLicensePlate()const;
    [[nodiscard]] std::string getOwnerName()const;
    [[nodiscard]] time_t getEntryTime()const;
    [[nodiscard]] float getMustPay()const;

};



#endif //VEHICLES_H
