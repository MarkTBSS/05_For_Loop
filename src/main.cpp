#include <iostream>

int main() {
    int first_input = 8;
    int second_input = 11;
    std::string english_dict_for_output[10] = {  
        "one", 
        "two", 
        "three", 
        "four", 
        "five", 
        "six", 
        "seven", 
        "eight", 
        "nine",
        "Greater than 9"
    };

    for(int i = first_input; i <= second_input; i++) {
        if (i <= 9 && i > 0 ) {
            std::cout << english_dict_for_output[i - 1] << std::endl;
        } else {
            //i % 2 == 0 ? std::cout << "even\n" : std::cout << "odd\n";
            if (i % 2 == 0) {
                std::cout << "even\n";
            } else {
                std::cout << "odd\n";
            }
        }
    }
    return 0;
}