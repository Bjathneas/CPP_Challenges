#include <iostream>
#include <string>

int get_sum(int num) {
  std::string num_str = std::to_string(num);
  int sum = 0;
  while (num > 0) {
    int digit = num % 10;
    sum += digit;
    num /= 10;
  }
  return sum;
}

int main()
{
    printf("Input number:\n");
    int input;
    std::cin >> input;
    printf("The sum of %i\'s digits is %i\n", input, get_sum(input));
    return EXIT_SUCCESS;
}
