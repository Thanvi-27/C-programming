#include <stdio.h>
int main() {
    int num,rev=0,rem;
    printf("enter a number:");
    scanf("%d",&num);
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;

    }
    if(num==rev){
        printf("%d is a palindrome number",num);
    }
    else {
        printf("%d is not a palindrome number",num);
    }
}