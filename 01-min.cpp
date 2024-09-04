#include<stdio.h>

int main() {
    int x,y;
    printf("Enter the value for x and y:");
    scanf("%d %d",&x,&y);

    if(x<y){
        printf("The min value is x: %d",x);
    } else{
        printf("The min value is x: %d",y);
    }
        
    return 0;
}