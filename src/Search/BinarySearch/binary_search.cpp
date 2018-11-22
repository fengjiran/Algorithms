//
// Created by Richard on 2018/11/20.
//

#include <vector>

using std::vector;

// 假设数组是递增序列
// 一般情况下的二分查找，经典的二分查找
// 没有考虑数组中具有多个重复的key的情况
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


// 假设数组是非递减序列
// 寻找重复key中第一个出现的位置
int binarySearchFirst(const int array[], int len, int key) {
    // 判断数组是否为空
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


// 假设数组是非递减序列
// 寻找重复key中最后一个出现的位置
int binarySearchLast(const int array[], int len, int key) {
    // 判断数组是否为空
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

// STL style, use container and iterator
vector<int>::difference_type binarySearchSTL(const vector<int> &a, int key) {
    if (a.begin() == a.end())
        return -1;

    auto iter_beg = a.begin();
    auto iter_end = a.end();
    vector<int>::const_iterator iter_mid;

    while (iter_beg <= iter_end) {
        iter_mid = iter_beg + (iter_end - iter_beg) / 2;
        if (key < *iter_mid)
            iter_end = iter_mid - 1;
        else if (key > *iter_mid)
            iter_beg = iter_mid + 1;
        else
            return iter_mid - a.begin();
    }

    return -1;

}
