#include <iostream>
#include "ParkingManager/ParkingManager.h"
int main() {
    srand(time(nullptr));
    ParkingManager pm;
    pm.run();
    return 0;
}