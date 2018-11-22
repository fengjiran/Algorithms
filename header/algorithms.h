//
// Created by Richard on 2018/11/21.
//

#ifndef ALGORITHMS_ALGORITHMS_H
#define ALGORITHMS_ALGORITHMS_H

#include <vector>
using std::vector;

int binarySearch(const int array[], int len, int key);

int binarySearchFirst(const int array[], int len, int key);

int binarySearchLast(const int array[], int len, int key);

vector<int>::difference_type binarySearchSTL(const vector<int> &a, int key);

#endif //ALGORITHMS_ALGORITHMS_H
