#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    int result = (left - right) * (left - right);
    return result;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    if (mask < 0 || bit_pos < 0) {
      return false;
    }
    int result = (mask >> bit_pos) & 1;
    return result;
  }

  // Task 3
  int max3(int left, int middle, int right) {
    int maxNumber = left;
    if (middle >= maxNumber) {
      maxNumber = middle;
    }
    if (right >= maxNumber) {
      maxNumber = right;
    }
    return maxNumber;
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if ((left == nullptr) || (right == nullptr)) {
      ;
    } else {
      int temp;
      temp = *left;
      *left = *right;
      *right = temp;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    if (arr == nullptr || length <= 0) {
      return 0;
    }
    int sum = 0;
    for (int i = 0; i < length; i++) {
      sum += arr[i];
    }
    return sum;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if (arr == nullptr || length <= 0) {
      return nullptr;
    }
    int* result = nullptr;
    int max = arr[0];
    for (int i = 0; i < length; i++) {
      if (arr[i] >= max) {
        max = arr[i];
        result = arr + i;
      }
    }
    return result;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if (length <= 0) {
      return nullptr;
    }
    int* arr = new int[length];
    std::fill(arr, arr + length, init_value);
    return arr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if (arr_in == nullptr || length <= 0) {
      return nullptr;
    }
    int* arr_out = new int[length];
    std::copy(arr_in, arr_in + length, arr_out);
    return arr_out;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if (arr == nullptr) {
      os << "Invalid argument: arr\n";
    } else if (length <= 0) {
      os << "Invalid argument: length\n";
    } else if (k <= 0) {
      os << "Invalid argument: k\n";
    } else {
      for (int i = 0; i < length; i++) {
        if (i % k == 0) {
          os << arr[i] << "\t";
        }
      }
    }
  }

}  // namespace assignment
