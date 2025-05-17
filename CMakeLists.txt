cmake_minimum_required(VERSION 3.31)
project(ParkingLotManager)

set(CMAKE_CXX_STANDARD 17)

add_executable(ParkingLotManager main.cpp
        ParkingManager/ParkingManager.cpp
        ParkingManager/ParkingManager.h
        ParkingManager/Vehicles/Vehicles.cpp
        ParkingManager/Vehicles/Vehicles.h
        ParkingManager/Vehicles/Car/Car.cpp
        ParkingManager/Vehicles/Car/Car.h
        ParkingManager/Functions/AddVehicle/AddVehicle.cpp
        ParkingManager/Functions/AddVehicle/AddVehicle.h
        ParkingManager/Vehicles/Bus/Bus.cpp
        ParkingManager/Vehicles/Bus/Bus.h
        ParkingManager/Vehicles/MotorBike/MotorBike.cpp
        ParkingManager/Vehicles/MotorBike/MotorBike.h
        ParkingManager/Functions/ParkingLot/CheckParkingLot.cpp
        ParkingManager/Functions/ParkingLot/CheckParkingLot.h
        ParkingManager/Functions/RemoveVehcile/RemoveVehicle.cpp
        ParkingManager/Functions/RemoveVehcile/RemoveVehicle.h)
