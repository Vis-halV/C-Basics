#include<stdio.h>

int main() {
    int x,area;
    printf("Enter the side of the square to find its area:");
    scanf("%d", &x);
    area = x * x;
    printf("The area of the square is: %d",area);
    return 0;
}