#include <cstdlib> // Include the necessary header for the system function
#include<iostream>
using namespace std;

int main() {
    // Display some output
    std::cout << "Hello, this is some text on the console." << std::endl;

    // Wait for user input
    std::cout << "Press Enter to clear the console...";
    std::cin.get();

    // Clear the console screen
    system("cls");

    // The console screen is now clear
    std::cout << "The screen has been cleared." << std::endl;

    return 0;
}