
#include <stdio.h>
#include "02_arithmetic.h"

int main() {

// ARITHMETIC OPERATION
    /*
     * ARITHMETIC OPERATORS
     *
     * +   Addition
     * -   Subtraction
     * *   Multiplication
     * /   Division
     * %   Modulus (remainder)
     */ 
    printf("\nArithmetic Operations: ");
    int a = 10;
    int b = 3;
    printf("\nAddition: %d", a + b);        // 13
    printf("\nSubtraction: %d", a - b);     // 7
    printf("\nMultiplication: %d", a * b);  // 30
    printf("\nDivision: %d", a / b);        // 3
    printf("\nRemainder: %d", a % b);       // 1

    // to get a decimal point while divison, turn it into a float. 
    printf("\nDecimal: %.2f\n", (float)a / b);    // Output: 3.33

    // Another way to do this: 
    float c = a / b;
    printf("\nFloat Division (int/int): %.2f", c); // 3.005 : encountered an error 

    float d = 3; // turning the int b into a float d
    float e = a / d;
    printf("\nFloat Division (int/float): %.2f", e); // 3.35, but we need 3.33 

    float f = 10;
    float g = f/d;
    printf("\nFloat Division (float/float): %.2f", g);


// INCREMENET/DISCREMENT
/*
     * Pre increment: ++x : = x+1 (increment by 1)
     * Post increment: x++ : = x, then x+1  
     * Pre-decrement: --x : = x-1 (decrement by 1)
     * Post-decrement: x-- : = x, then x-1
*/ 
    printf("\n---\nIncrement/Decrement Operators: ");
    int x = 5;
    // use current value then increased by 1 
    printf("\n%d\n", x++);  // Post Increment: Prints 5
    printf("%d\n", x);    // Prints 6
    printf("%d\n", ++x);  // PRE-INCREMENT, Prints 7

    printf("%d\n", x--);  // Post Decrement, Prints 7
    printf("%d\n", x);    // Prints 6
    printf("%d", --x);  // Pre Decrememnt, Prints 5; decreases first then use the new value 


// Augmented Assignment Operators/ Compound Assignment Operators

/*  //* Short Hand syntax, not to save memory.
     * += : x += y : x = x + y
     * -= : x -= y : x = x - y
     * *= : x *= y : x = x * y
     * /= : x /= y : x = x / y
     * %= : x %= y : x = x % y
*/
    printf("\n---\nAugmented/Compound Assignment Operators: \n");
    int m = 10;
    m += 5;  // m = 10 + 5 = 15
    m -= 3;  // m = 15 - 3 = 12
    m *= 2;  // m = 12 * 2 = 24
    m /= 4;  // m = 24 / 4 = 6
    m %= 4;  // m = 6 % 4 = 2
    printf("Final m = %d\n", x);

    return 0;
}

