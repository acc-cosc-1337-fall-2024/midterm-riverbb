/*
The program flow is as follows:
1) Prompt user for a number.
        a-Validate that the number is in the range of 1 to 15
2) Pass the number to the get_fib_number function, save the return value to a variable in main.
3) Display the Fibonacci number
4) The program will loop until user wants to exit.
*/

#include "question3.h"
#include <iostream>

int main()
{
    
    int number;
    char choice;

    do
      {
        std::cout << "\nentre a number 1 thru 15: ";
        std::cin >> number;
        if (number < 1 || number > 15)
        {
          std::cout << "invalid number, try again\n";
          continue;
        }

        int fib_number = get_fib_number(number);
        std::cout << "number #" << number << " in the fibonacci sequence is " << fib_number;

        std::cout << "\ndo you want to do that again? (y/n): ";
        std::cin >> choice;
        
      }
      while (choice == 'y' || choice == 'Y');

    std::cout << "\nbye bye!!\n";
  
    return 0;
  
}
