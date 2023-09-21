#include <iostream>
using namespace std;

int main() {
  // Define the dimensions of the 2D array
  int len;

  std::cin >> len;
  int arr[len][len];
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len; j++) {
      std::cin >> arr[i][j];
    }
  }

  // Declare and initialize sum1
  int sum1 = 0, sum2 = 0, count = 1;

  // Calculate the sum of diagonal elements
  for (int i = 0; i < len; i++) {
    sum2 += arr[i][len - count];
    count++;
    for (int j = 0; j < len; j++) {
      if (i == j)
        sum1 += arr[i][j];
    }
  }
  std::cout << "Sum of left diagonal elements: " << sum1 << std::endl;
  std::cout << "Sum of right diagonal elements: " << sum2 << std::endl;
  return 0;
}
