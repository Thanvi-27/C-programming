#include <stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    //checking
    if(n>0){
        printf("%d is a positive number",n);
    }
    else{
        printf("%d is a negative number",n);
    }

}