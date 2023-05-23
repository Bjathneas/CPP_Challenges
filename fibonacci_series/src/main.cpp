#include <iostream>
#include <stdexcept>
#include <vector>

std::vector<int> get_fibonacci(int n){
    std::vector<int> series{0, 1};
    for(int i = 1; i < n-1; i++){
        int fib = series[i] + series[i-1];
        if(fib < 0){
            printf("Fibonacci series went out of range of int size, returning maxed fibonacci series\n");
            return series;
        }
        series.push_back(fib);
    }
    return series;
}

int main()
{
    printf("How many numbers of the Fibonacci series do you wish to view(minimum of 2):\n");
    int n;
    std::cin >> n;
    if(n < 2){
        printf("Invalid input\n");
        exit(EXIT_FAILURE);
    }
    auto series = get_fibonacci(n);
    for(int i : series) {
        printf("%i,",i);
    }
    printf("\n");
    return EXIT_SUCCESS;
    
}
