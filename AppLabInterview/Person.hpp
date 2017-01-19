#include <iostream>
#include "Gender.hpp"

class Person
{
  public:
    Person(std::string name, Gender gender);
    std::string getName();
    Gender getGender();
  private:
    std::string name;
    Gender gender;
};
