// In the cpp file, write the code to returns the fibonacci number for the int parameter value.

/*
Example:

get_fib_number(10);
returns  55
*/

#include "question3.h"

bool test_config()
{
    return true;
}

int get_fib_number(int number)
{
  if (number == 0)
  {
    return 0;
  }
  else if (number == 1)
  {
    return 1;
  }
  else
  {
    int a = 0;
    int b = 1;
    int fib_number;

    for (int i = 2; i <= number; i++)
      {
        fib_number = a + b;
        a = b;
        b = fib_number;
      }

    return fib_number;
  }
  
}
