#include <stdio.h>
#include <stdbool.h> // boolean including header file calling 

int main() {

/*
VARIABLES AND FORMAT SPECIFIER 
format specifier: (%x = Keep a storage (%) for this (x) type of data)
%+w.nt = storage sign(+/-) width . n(num after decimal point) t(data type)
% : begins the specifer, tells the compiler to keep a storage
+ : sign before number type integer 
w : width of the variable in the terminal (how many spaces)
. 
n : how many numbers of digits after the decimal point 
t : data type (d: int, f: float, lf: long float for double, c: string, b: boolean)
*/

// number variables 

 // integer type | whole numbers , %d 
    int age = 20; // declaring an integer type (int) variable (age) and assigning value to it (20)
    printf("\nYou are %d years old\n", age); // format specifier:  %d 

  // what if you put a float in an integer datatype? 
    int fl_type = 25.83; // already you can see a warning
    printf("\nthe float in int type var %d", fl_type); // 25 

 // float type | 4 bytes, for all real numbers     
    float gpa = 2.5;
    printf("\nYour gpa is %f", gpa); // 6 unnecessary zeros at the end : 2.500000
    // you can use format specifer to get rid of these zeros 
    printf("\nYour gpa is %.2f", gpa); // o - 2.50

    // int in float dtype
    float int_type = 3; 
    printf("\nthe integer in float type var %f", int_type);

    float temp = -2.424;
    printf("\nThe room temperature is %f°F", temp);
    
 // Double type | 4*2 = 8 bytes, for long float    
    double pi = 3.141594954003; // double : 8 bytes; lots of digit after the decimal 
    printf("\nThe value of pi is %.15f", pi); // as instructed it will print 15 digits after the decimal 

// Mixed: 
    printf("\n\nA visualization on format specifier functions: ");
    float price1 = 1.5;
    int price2 = 3;
    float price3 = -100.7394;

    printf("\n%+7.2f", price1);
    printf("\n%+7.2d", price2);
    printf("\n%+7.2f", price3);

// string variables : character (char, char [])
    
 // char | onle one character, if typed multiple, only the last will be printed and it will hint warning 
    char grade = 'd'; // you cant use double "" 
    printf("\nYour grade is %c\n", grade);
  
 // array | char var[] (array of characters)
    char name[] = "Anika Shaiara";
    printf("\nHello %s", name);

// bool | 1 = true, 0 = false ; 1 byte (requires to include <stdbool.h>)
    bool isOnline = true; 
    printf("\n%d\n", isOnline);

    // with an if else statement 

    if (isOnline){
        printf("\nYou are ONLINE");
    }
    else{
        printf("\nYou are OFFLINE");
    }

    return 0; 
}