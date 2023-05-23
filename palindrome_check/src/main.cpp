#include <iostream>
#include <UtilCore/strings.h>

std::string reversed(std::string str){
    std::string reversed{""};
    int str_len = str.length();
    for(int i = 0; i < str_len; i++){
        reversed += str[str_len - 1 - i];
    }
    return reversed;
}

int main()
{
    printf("Input text to find if it is a palindrome:\n");
    std::string input;
    std::getline(std::cin, input);
    UtilCore::purge_special(input);
    UtilCore::tolower(input);

    printf("%s\n",(input == reversed(input)) ? "it is a palindrome" : "nope, not a palindrome");
    
    return EXIT_SUCCESS;
}
