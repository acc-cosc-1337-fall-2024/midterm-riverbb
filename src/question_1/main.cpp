// The main program prompts the user for kilograms and meters per second, call the get_kinetic_energy, and display the kinetic energy value to screen, and will continue until the user opts out.  Validate for correct input.

#include "question1.h"
#include <iostream>

int main()
{
    
    double mass, velocity;
    char choice;

    do
      {
        std::cout << "\nenter mass of the object in kgs: ";
        std::cin >> mass;

        std::cout << "enter velocity of the object in m/s: ";
        std::cin >> velocity;

        if (mass < 0 || velocity < 0)
          { 
            std::cout << "invalid input. please enter positive values.\n";
            continue;
          }

        double kinetic_energy = get_kinetic_energy(mass, velocity);
        std::cout << "kinetic energy of the object is: " << kinetic_energy << " joules\n";

        std::cout << "\ndo you want to calculate kinetic energy again? (y/n): ";
        std::cin >> choice;
      }
      while (choice == 'y' || choice == 'Y');

    std::cout << "\nbye bye!!\n";
  
    return 0;
  
}
