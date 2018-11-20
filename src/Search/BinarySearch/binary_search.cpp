//
// Created by Richard on 2018/11/20.
//
#include <iostream>

int binarySearch(const int array[], int len, int key) {
    if (array == nullptr || len <= 0)
        return -1;

    int l = 0;
    int h = len - 1;
    int m;
    while (l <= h) {
        m = l + (h - l) / 2;
        if (key < array[m])
            h = m - 1;
        else if (key > array[m])
            l = m + 1;
        else
            return m;
    }
    return -1;
}

int binarySearchFirst(const int array[], int len, int key) {
    if (array == nullptr || len <= 0)
        return -1;

    int l = 0;
    int h = len - 1;
    int m;

    while (l <= h) {
        m = l + (h - l) / 2;
        if (key < array[m])
            h = m - 1;
        else if (key > array[m])
            l = m + 1;
        else {
            while (m >= 0 && key == array[m])
                m--;
            m++;
            return m;
        }
    }
    return -1;
}

int binarySearchLast(const int array[], int len, int key) {
    if (array == nullptr || len <= 0)
        return -1;

    int l = 0;
    int h = len - 1;
    int m;

    while (l <= h) {
        m = l + (h - l) / 2;
        if (key < array[m])
            h = m - 1;
        else if (key > array[m])
            l = m + 1;
        else {
            while (m <= len - 1 && key == array[m])
                m++;
            m--;
            return m;
        }
    }
    return -1;
}