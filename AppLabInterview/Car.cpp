#include "Car.hpp"

Car::Car(std::string carPlate, std::string model, int seatNumber) : carPlate(carPlate), model(model), seatNumber(seatNumber) {}

void Car::addPassenger(Person person)
{
  passengers.push(person);
}

void Car::removePassenger()
