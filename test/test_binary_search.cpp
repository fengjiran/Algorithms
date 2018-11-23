//
// Created by Richard on 2018/11/21.
//
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <iostream>
#include "../header/catch.hpp"
#include "../header/algorithms.h"

using std::cout;
using std::endl;

TEST_CASE("Binary Search test") {
    SECTION("Test origin function.") {
        int a[] = {2, 3, 3, 3, 3, 4, 5};
        int len = sizeof(a) / sizeof(a[0]);
        REQUIRE(binarySearch(a, len, 6) == -1);
        REQUIRE(binarySearchFirst(a, len, 1) == -1);
        REQUIRE(binarySearchLast(a, len, 3) == 4);
    }

    SECTION("Test STL function") {
        vector<int> a = {2, 3, 3, 3, 3, 4, 5};
//        auto beg = a.begin() - 1;
//        auto end = a.end() + 2;
//        cout << *beg << endl;
//        cout << *end << endl;
//        cout << end - beg << endl;
        REQUIRE(binarySearchSTL(a, 3) == 3);
        REQUIRE(binarySearchFirstSTL(a, 2) == 0);
        REQUIRE(binarySearchLastSTL(a, 3) == 4);
    }

}