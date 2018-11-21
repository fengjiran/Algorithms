//
// Created by Richard on 2018/11/21.
//
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../header/catch.hpp"
#include "../header/algorithms.h"


TEST_CASE("Binary Search test") {
    SECTION("Test origin function.") {
        int a[] = {2, 3, 3, 3, 3, 4, 5};
        int len = sizeof(a) / sizeof(a[0]);
        REQUIRE(binarySearch(a, len, 6) == -1);
        REQUIRE(binarySearchFirst(a, len, 1) == -1);
        REQUIRE(binarySearchLast(a, len, 3) == 4);
    }

}