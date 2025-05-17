# ParkingLotManager
A C++ application for managing a simple parking lot system. It allows users to register vehicle entries, check currently parked vehicles, calculate parking duration and costs, and remove vehicles upon exit.
## Features
- Add new vehicles (Car, Bus, Motorbike) with randomly generated license plates
- Prevent duplicate license plates
- Record and display the entry time of each vehicle
- Show all currently parked vehicles
- Remove a vehicle by license plate
- Calculate total parked time and cost upon exit
- Object-oriented design with class inheritance (Vehicle → Car, Bus, Motorbike)
## Technologies Used
- C++17
- Standard Template Library (STL): vector, string, ctime, etc.
- CMake for build configuration
## Project Structure
```
ParkingLotManager/
├── ParkingManager/         # Main controller logic
│   ├── Functions/          # Add/Remove/Check vehicle actions
│   └── Vehicles/           # Base Vehicle class and derived types
├── main.cpp                # Entry point
├── CMakeLists.txt          # Build configuration
```
## How to Build
1. Make sure you have a C++ compiler and CMake installed on your system.
2. Clone the repository:
```bash
git clone https://github.com/kamakozi/ParkingLotManager
cd ParkingLotManager
```
3. Build using CMake:
```bash
mkdir build
cd build
cmake ..
make
```
4. Run the application:
```bash
./ParkingLotManager
```
## Example Usage
```
Vehicle entered!
Plate: ZG123T
Owner: John Doe
Entry time: 14:42
Model: Car

Vehicle was parked for 3 minutes and 12 seconds.
Total cost: 11.97€
Vehicle removed!
```
