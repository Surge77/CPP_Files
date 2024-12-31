
#include <ctime>
#include <chrono>
#include<iostream> //input and output operations
#include<string.h> //contains functions for manipulating string(arrays of characters)
#include<conio.h> //stands for console input/output used for tasks like reading keystrokes,moving the cursor on screen changing text colours and clearing console can be handy while creating a text based user interface
#include<fstream> //used for performing input and output operations with files includes classes like ifstream,ofstream,fstream
#include<unistd.h> //stands for unix standard provides access to variety of system calls and constants related to system and file i/o process control and other low level operations
#include<windows.h>
using namespace std;

int main() {

    cout<<"Welcome to the time"<<endl;

    system("PAUSE");
    // Get the current system time using std::chrono
    auto currentTime = std::chrono::system_clock::now();
    
    // Convert the system time to a time_point
    std::time_t currentTime_t = std::chrono::system_clock::to_time_t(currentTime);
    
    // Convert the time_point to a string for display
    std::string currentTimeStr = std::ctime(&currentTime_t);
    
    // Display the current time
    std::cout << "Current time: " << currentTimeStr;

    return 0;
}
