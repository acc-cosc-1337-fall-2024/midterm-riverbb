// In the cpp file, write the code to return the factorial sequence for the int parameter value.

/*
Example:

get_factorial_sequence(5)
returns  1x2x3x4x5=120
*/

#include "question4.h"
#include <string>

bool test_config()
{
    return true;
}

std::string get_factorial_sequence(int number)
{
  std::string sequence = "1";
  
  int factorial = 1;

  for (int i = 2; i <= number; i++)
    {
      factorial *= i;
      sequence += "x" + std::to_string(i);
    }

  sequence += "=" + std::to_string(factorial);

  return sequence;
  
}
