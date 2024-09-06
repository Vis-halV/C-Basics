#include<stdio.h>

// Basics understa=ndin of flowchar and algorithms //

int main() {

    // Declaration of variables //
    int x,area; 

    // Getting values for the var x //
    printf("Enter the side of the square to find its area:");
    scanf("%d", &x);

    // Calculating the area and displaying //
    area = x * x;
    printf("The area of the square is: %d",area);

    return 0;
}