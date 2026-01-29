#include <iostream>

int linear_search(int arr[], int size, int elem);

int main() {
  int nums[] = { 16, 43, 22, 95, 52, 98, 32 };
  int len_of_nums = sizeof(nums)/sizeof(int);

  int searching_elem;
  std::cout << "Enter element to search: ";
  std::cin >> searching_elem;

  int index = linear_search(nums, len_of_nums, searching_elem);

  if (index != -1) {
    std::cout << searching_elem << " is at index " << index << "!" << std::endl;
  } else {
    std::cout << searching_elem << " is not found in array!" << std::endl;
  }

  return 0;
}

int linear_search(int arr[], int size, int elem) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == elem) {
      return i;
    }
  }
  return -1;
}
