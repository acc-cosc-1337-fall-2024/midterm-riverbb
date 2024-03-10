// In the cpp file, write code to implement the bonus pay table below.

/*
A company pays employees a sales commission based on the bonus pay table below.
  0 to 499          | 5%
  500 to 999        | 6%
  1000 to 1499      | 7%
  1500 and over     | 8%
  less than 0       | 0
*/

#include "question2.h"

bool test_config()
{
    return true;
}

double get_sales_commission(double sales)
  {
    if (sales < 0)
    {
      return 0;
    }
    else if (sales < 500)
    {
      return sales * 0.05;
    }
    else if (sales < 1000)
    {
      return sales * 0.06;
    }
    else if (sales < 1500)
    {
      return sales * 0.07;
    }
    else
    {
      return sales * 0.08;
    }
  }
