// #include <stdio.h>
// #include <string.h>

// struct Car {
//     char brand[20];
//     int year;
// };

// // Function to initialize struct (no constructor)
// void initCar(struct Car* car, const char* brand, int year) {
//     strcpy(car->brand, brand);
//     car->year = year;
// }

// // Function to print car details
// void printCar(const struct Car* car) {
//     printf("Brand: %s, Year: %d\n", car->brand, car->year);
// }

// int main() {
//     struct Car myCar;
//     initCar(&myCar, "Toyota", 2023);
//     printCar(&myCar);
//     return 0;
// }


#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    int year;

public:
    // Constructor (auto-initialization)
    Car(std::string b, int y) : brand(b), year(y) {}

    // Member function
    void printCar() {
        std::cout << "Brand: " << brand << ", Year: " << year << std::endl;
    }
};

int main() {
    Car myCar("Toyota", 2023);
    myCar.printCar();  // No need to pass struct
    return 0;
}
