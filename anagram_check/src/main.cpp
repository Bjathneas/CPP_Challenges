#include <string>
#include <iostream>

#include <UtilCore/strings.h>

bool is_anagram(std::string input1, std::string input2) {
    if(input1.length() != input2.length())
        return false;
    UtilCore::tolower(input1);
    UtilCore::tolower(input2);

    for(char c : input1) {
        int input2_length = input2.length();
        bool found{false};
        for(int i = 0; i < input2_length; i++) {
            if(c == input2[i]){
                found = true;
                input2.erase(input2.begin()+i);
                break;
            }
        }
        if(!found){
            return false;
        }
    }
    return true;
}

int main()
{
    std::string input1;
    std::string input2;
    printf("Input first text:\n");
    getline(std::cin, input1);
    printf("Input second text:\n");
    getline(std::cin, input2);

    printf("%s\n", is_anagram(input1, input2) ? "This is an anagram" : "This isn't an anagram");
    return EXIT_SUCCESS;
}
