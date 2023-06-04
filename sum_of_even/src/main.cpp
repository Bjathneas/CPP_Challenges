#include <iostream>
#include <vector>

int sum_even_numbers(std::vector<int> ints) {
	int value{0};
	for(int i : ints) {
		if(!(i%2))
			value += i;
	}
	return value;
}

int main()
{
    std::cout << sum_even_numbers({1,2,3,4,5,6,7,8,9,10}) << std::endl;
}
