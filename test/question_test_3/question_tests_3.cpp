#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
  REQUIRE(true == true);
}

TEST_CASE("int get_fib_number(int number")
{
  REQUIRE(get_fib_number(5) == 5);
  REQUIRE(get_fib_number(7) == 13);
  REQUIRE(get_fib_number(10) == 55);
  REQUIRE(get_fib_number(12) == 144);
}
