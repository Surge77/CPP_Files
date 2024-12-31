#include <iostream>
using namespace std;

//Question: to write a program to find volume of cube using inline 

class Cube
{
public:
    inline double Volume_of_cube(double side)
    { // creating a class public class with volume function for giving volume of cube
        return side * side * side;
    }
};

int main()
{
    // create a cube object
    Cube c;

    // get the side of the cube from the user
    double side;
    cout << "Enter the side of cube: "; 
    cin >> side;

    // calculate the volume of cube
    double volume = c.Volume_of_cube(side);

    // display the volume of cube
    cout << "The volume of the cube is: " << volume << endl;

    return 0;
}
