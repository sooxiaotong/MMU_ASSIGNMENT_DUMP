#include <iostream>
#include "Person.hpp"
#include "Car.hpp"
#include "Gender.hpp"

ostream& operator<<(ostream& os, const Gender& gender)  
{  
    if(gender == Gender::MALE)
      os << "Male";  
    else
      os << "Female";
    return os;  
}

int main()
{

}
