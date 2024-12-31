#include <iostream>
using namespace std;

//Question:finding volumes of theses shapes using function overloading without using class

float volume(float side)
{
    // Calculate the volume of a cube
    return side * side * side;
}

float volume(float radius, float height)
{
    // Calculate the volume of a cylinder
    return 3.14 * radius * radius * height;
}

float volume(float length, float breadth, float height)
{
    // Calculate the volume of a rectangular box
    return length * breadth * height;
}

int main()
{

    float side, radius, length, breadth, height;

    // input for cube
    cout << "Enter the side of cube: ";
    cin >> side;
    float cube_volume = volume(side);

    // input for cylinder
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Enter height: ";
    cin >> height;
    float volume_cylinder = volume(radius, height);

    // input for rectangular box
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;
    cout << "Enter height: ";
    cin >> height;
    float volume_box = volume(length, breadth, height);

    // display results
    cout << "The volume of cube is: " << cube_volume << endl;
    cout << "The volume of cylinder is: " << volume_cylinder << endl;
    cout << "The volume of rectagular box is: " << volume_box << endl;
}