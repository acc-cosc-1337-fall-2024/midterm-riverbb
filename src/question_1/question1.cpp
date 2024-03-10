// In the cpp file, write code to return the kinetic that the object has.

/*
  KE = ½ mv^2(v squared)

  Formula variables:

  KE = kinetic energy in joules
  m = object’s mass in kilograms
  v = object’s velocity in meters per second
*/

#include "question1.h"

bool test_config()
{
    return true;
}

double get_kinetic_energy(double mass, double velocity)
{
    return 0.5 * mass * velocity * velocity;
}
