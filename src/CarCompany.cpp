#include "CarCompany.h"

// Base class constructor
CarCompany::CarCompany(std::string color, int speed, double price)
    : color(color), speed(speed), price(price) {}

// Base class destructor
CarCompany::~CarCompany() {}

// Base class getters
std::string CarCompany::getColor() const {
    return color;
}

int CarCompany::getSpeed() const {
    return speed;
}

double CarCompany::getPrice() const {
    return price;
}

// Base class setters
void CarCompany::setColor(std::string color) {
    this->color = color;
}

void CarCompany::setSpeed(int speed) {
    this->speed = speed;
}

void CarCompany::setPrice(double price) {
    this->price = price;
}

// Base class method to print details
void CarCompany::printDetails() const {
    std::cout << "Color: " << color << ", Speed: " << speed << " km/h, Price: $" << price << std::endl;
}

// Derived class Sedan constructor
Sedan::Sedan(std::string color, int speed, double price)
    : CarCompany(color, speed, price) {}

// Derived class Sedan method to print details
void Sedan::printDetails() const {
    std::cout << "Sedan - ";
    CarCompany::printDetails();
}

// Derived class SUV constructor
SUV::SUV(std::string color, int speed, double price, bool offRoadCapability)
    : CarCompany(color, speed, price), offRoadCapability(offRoadCapability) {}

// Derived class SUV getter for off-road capability
bool SUV::hasOffRoadCapability() const {
    return offRoadCapability;
}

// Derived class SUV setter for off-road capability
void SUV::setOffRoadCapability(bool offRoadCapability) {
    this->offRoadCapability = offRoadCapability;
}

// Derived class SUV method to print details
void SUV::printDetails() const {
    std::cout << "SUV - ";
    CarCompany::printDetails();
    std::cout << "Off-Road Capability: " << (offRoadCapability ? "Yes" : "No") << std::endl;
}

