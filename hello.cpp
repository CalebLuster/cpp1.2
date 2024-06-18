#include <iostream>
#include <string>

int main() {
    for (int i = 0; i < 3; ++i) {
        // Variables to store the user inputs
        std::string firstString, secondString;

        // Prompt the user for the first string
        std::cout << "Enter the first string: ";
        std::getline(std::cin, firstString);

        // the input buffer is cleared
        std::cin.clear();
        std::cin.sync();

        // Prompt the user for the second string
        std::cout << "Enter the second string: ";
        std::getline(std::cin, secondString);

        // Concatenate the two strings
        std::string concatenatedString = firstString + secondString;

        // Print the concatenated result
        std::cout << "Concatenated string: " << concatenatedString << std::endl;
    }

    return 0;
}
