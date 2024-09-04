#include<stdio.h>

int main() {
    int n,i;
    int temp;

    /*We know that lets say a number is said to primr when it is divisible by only one and that number itself.
      So there is a logic that it has either or nor divisor less than itself so that it is enough to check if it divisile by number untill itself.*/

    for(i=1;i<n;i++){
        if((n%i)==0){
            temp = 0;
        } else{
            temp = 1;
        }
    }

    if(temp==1){
        printf("The given number is an even number.");
    } else{
        printf("The given number is an odd number. ");
    }

    return 0;
}