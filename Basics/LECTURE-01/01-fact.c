#include<stdio.h>

int main() {
    int n,i;
    int fact=1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Learning to know the flow of the Loops //
    for(i=1;i<=n;i++){
        fact = fact * i;
    }

    printf("The factorial is : %d",fact);

    return 0;
}