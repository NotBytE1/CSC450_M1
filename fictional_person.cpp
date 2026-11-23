// CSC450 Module 1: Fictional person console application
#include <iostream>
#include <string>

int main() {
    // Store fictional personal information as text.
    const std::string firstName = "Jordan";
    const std::string lastName = "Taylor";
    const std::string streetAddress = "123 Imaginary Lane";
    const std::string city = "Denver";
    const std::string zipCode = "80205";

    // Display each field in the console.
    std::cout << "First Name: " << firstName << '\n';
    std::cout << "Last Name: " << lastName << '\n';
    std::cout << "Street Address: " << streetAddress << '\n';
    std::cout << "City: " << city << '\n';
    std::cout << "Zip Code: " << zipCode << '\n';

    return 0;
}
