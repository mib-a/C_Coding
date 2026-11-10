#include <stdio.h>

int main(){

// GARBAGE VALUE / UNDEFINED BEHAVIOR
    int age1; // only storage is saved for an integer but no value so garbage value will take it's place 
    printf("You are %d years old", age1);  // 1130164304; garbage value 

    // to get rid of this garbage value, we can assign an initial value to it.
    int age = 0; // now the garbage value is replaced with 0
    float gpa = 0.0f; // f for another developer to understand this, practice 
    char grade = '\0'; // null terminator 
    char name[30] = ""; // empty string 

    printf("\nEnter Your Age: ");
    scanf("%d", &age); // & is the address of operator, at the age of var age, the value that is inputted will be stored.
    printf("You are %d years old", age);

    printf("\nEnter Your GPA: ");
    scanf("%f", &gpa);
    
    printf("Enter Your Grade: ");
    scanf("%c", &grade); // space before %c is to avoid the newline

    printf("Enter Your Name: ");
    scanf("%s", name); 

    printf("\nYour GPA is %.2f", gpa);
    printf("\nYour Grade is %c", grade);
    printf("\nHello %s", name);

    return 0;
}