#include <iostream>

int main() {
  int nums[88];
  std::fill(nums, nums+88, 8888);

  for (int i = 0; i < 88; i++) {
    std::cout << i << " | " << nums[i] << std::endl;
  }

  return 0;
}
