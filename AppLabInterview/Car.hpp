#include <iostream>
#include <vector>
#include "Person.hpp"

class Car
{
  public:
    Car(std::string carPlate, std::string model, int seatNumber);
    void addPassenger(Person person);
    void removePassenger(Person person);
  private:
    const int seatNumber;
    std::string carPlate;
    std::string model;
    std::vector<Person> passengers;
};
