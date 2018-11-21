//
// Created by Richard on 2018/11/21.
//

#include "../header/catch.hpp"
#include "../header/algorithms.h"

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

int a[] = {2, 3, 3, 3, 3, 4, 5};
int len = sizeof(a);

TEST_CASE("Binary Search is testing", "[BinarySearch]") {
    REQUIRE(binarySearch(a, len, 3) == 3);
}