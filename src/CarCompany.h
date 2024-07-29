#ifndef CAR_COMPANY_H
#define CAR_COMPANY_H

#include <string>
#include <iostream>

// Base class
class CarCompany {
protected:
    std::string color;
    int speed;
    double price;

public:
    CarCompany(std::string color, int speed, double price);
    virtual ~CarCompany();

    // Getters
    std::string getColor() const;
    int getSpeed() const;
    double getPrice() const;

    // Setters
    void setColor(std::string color);
    void setSpeed(int speed);
    void setPrice(double price);

    virtual void printDetails() const;
};

// Derived class Sedan
class Sedan : public CarCompany {
public:
    Sedan(std::string color, int speed, double price);

    void printDetails() const override;
};

// Derived class SUV
class SUV : public CarCompany {
private:
    bool offRoadCapability;

public:
    SUV(std::string color, int speed, double price, bool offRoadCapability);

    // Getter
    bool hasOffRoadCapability() const;

    // Setter
    void setOffRoadCapability(bool offRoadCapability);

    void printDetails() const override;
};

#endif // CAR_COMPANY_H

