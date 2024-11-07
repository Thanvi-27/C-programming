#include <stdio.h>
int main() {
    int num,rev=0,rem,temp;
    printf("enter a number:");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;

    }
    if(num==rev){
        printf("%d is a palindrome number",num);
    }
    else {
        printf("%d is not a palindrome number",num);
    }
}