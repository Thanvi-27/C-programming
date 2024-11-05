#include <stdio.h>
int main() {
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n>=0&&n<10){
        printf("%d is a single digit number",n);
    }
    else if(n>=10&&n<100){
        printf("%d is a double digit number",n);
    }
    else if(n>=100&&n<1000){
        printf("%d is a triple digit number",n);
    }
    else{
        printf("%d may be a number greater than three digit number",n);
    }
}