#include <stdio.h>

//Question : to find volume of cube using functins in C

int volume_of_cube(int side)
{
    int volume = side * side * side;
    return volume;
}

int main()
{
    int side;
    printf("Enter the length of side: ");
    scanf("%d", &side);

    int volume = volume_of_cube(side); // here volume is declared during intilalization itself
    printf("Volume of cube is: %d\n", volume);

    return 0;
}
