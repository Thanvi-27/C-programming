#include <stdio.h>
int main() {
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int fact=1;
    int i=1;
    while(i<=n){
        fact=fact*i;
        i=i+1;  
    }
    printf("factorial of %d is %d",n,fact);
       
}