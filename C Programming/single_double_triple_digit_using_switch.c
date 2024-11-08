#include <stdio.h>
int main() {
    int n,digit;
    printf("enter a number:");
    scanf("%d",&n);
    if(n>=0&&n<10){
        digit=1;
    }
    else if(n>=10&&n<100){
        digit=2;
    }
    else if(n>=100&&n<1000){
        digit=3;
    }
    switch(digit) 
    {
        case 1:
        printf("%d is a single digit number",n);
        break;
        case 2:
        printf("%d is a double digit number",n);
        break;
        case 3:
        printf("%d is a triple digit number",n);
        break;
        default:
        printf("%d is not a single,double or triple digit number",n);

    }
    
}