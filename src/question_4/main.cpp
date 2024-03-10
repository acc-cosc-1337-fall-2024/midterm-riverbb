/*
The program flow is as follows:
1) Prompt user for a number.
        a-Validate that the number is in the range of 1 to 10
2) Pass the number to the get_factorial_sequence function, save the return value to a variable in main.
3) Display the factorial sequence
4) The program will loop until user wants to exit.
*/

#include "question4.h"
#include <iostream>
#include <string>

int main()
{
    
    int number;
    char choice;

    do
      {
        std::cout << "\nenter a number 1 thru 10: ";
        std::cin >> number;
        if (number < 1 || number > 10)
        {
          std::cout << "invalid number, try again\n";
          continue;
        }

        std::string sequence = get_factorial_sequence(number);  
        std::cout << "factorial sequence: " << sequence;

        std::cout << "\ndo you want to do that again? (y/n): ";
        std::cin >> choice;
        
      }
      while (choice == 'y' || choice == 'Y');

    std::cout << "\nbye bye!!\n";
  
    return 0;
  
}
