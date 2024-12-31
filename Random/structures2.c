#include<stdio.h>

//Write a program to read info for '5' employees containing name,experience in years , salary and employee id using structures
//display the details of employee with highest experience

struct employee{

    char name[20]; //variable for name
    int yrs;       //varible for experience in years
    long id;       //variable for employee id
    long long sal;  //variable for salary  take int or long


};

int main(){

    struct employee e [5];
    for(int i = 0; i<5;i++){ //loop for taking the input of 5 employees

        printf("Enter details of employee %d: \n",i+1); //while taking input enter the appropriate values according to the specifier
        printf("Enter name: ");                         //otherwise the scanf will stop reading, and the input will be left in the buffer.
        scanf("%s",&e[i].name);
        printf("Enter yrs of experience: ");
        scanf("%d",&e[i].yrs);
        printf("Enter employee id: ");
        scanf("%d",&e[i].id);
        printf("Enter salary: ");
        scanf("%d",&e[i].sal);

    }

    int high =  0,highest;  //loop for printing the highest experience0
    for(int i=0;i<5;i++){
        if(e[i].yrs>high){
            high=e[i].yrs;
            highest = i;
        }
    }
     
    //for printing the higest values for everything 
    printf("Employee with highest experience: \n");
    printf("Employee name: %s\n",e[highest].name);
    printf("Employee exp: %d\n",e[highest].yrs);
    printf("Employee id: %d\n",e[highest].id);
    printf("Employee salary: %d\n",e[highest].sal);
}