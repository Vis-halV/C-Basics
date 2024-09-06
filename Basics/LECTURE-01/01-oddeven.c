#include<stdio.h>

int main() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    // Checking whether or or even using remainder modulo (%) operator //
    
    if((n%2)==0){
        printf("Number is even.");
    } else{
        printf("Number is odd");
    }
        
    return 0;
}