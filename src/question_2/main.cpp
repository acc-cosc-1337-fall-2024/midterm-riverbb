/*
  The program flow is as follows:
  1) Prompt user for sales (keyboard entry).
  2) Pass the sales amount to the get_sales_commission function, save the return value to a variable in main.
  3) Display the sales commission to Screen as follows: 
    (Example) Sales of 1100 yields a commission of 77.
  4) The program will loop until user opts out.
*/

#include "question2.h"
#include <iostream>

int main()
{
  
  double sales;
  char choice;
  
  do
    {
      std::cout << "\nenter sales: ";
      std::cin >> sales;

      double commission = get_sales_commission(sales);
      std::cout << "sales of " << sales << " yeilds a commission of " << commission << "\n";
      std::cout << "do you want to do that again? (y/n): ";
      std::cin >> choice;
    }
    while (choice == 'y' || choice == 'Y');

    std::cout << "\nbye bye!!\n";
  
    return 0;
  
}
