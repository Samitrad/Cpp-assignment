#include "CarCompany.h"
#include <iostream>

int main() {
    Sedan mySedan("Red", 200, 25000);
    SUV mySUV("Blue", 180, 30000, true);

    std::cout << "Car Details:" << std::endl;

    // Print initial details
    mySedan.printDetails();
    mySUV.printDetails();

    // Modify car details using setters
    mySedan.setColor("Green");
    mySedan.setSpeed(220);
    mySedan.setPrice(26000);

    mySUV.setColor("Black");
    mySUV.setSpeed(190);
    mySUV.setPrice(32000);
    mySUV.setOffRoadCapability(false);

    std::cout << "\nUpdated Car Details:" << std::endl;

    // Print updated details
    mySedan.printDetails();
    mySUV.printDetails();

    return 0;
}

