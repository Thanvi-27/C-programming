#include <stdio.h>
int main() {
    int number;
    int sum=0;
    printf("enter a number:");
    scanf("%d",&number);
    int temp=number;
    while(temp>0){
       int lastnum=temp%10;
       int fact=1;
        for(int i=1;i<=lastnum;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
     
    if(number==sum){
        printf("%d is a special number",number);
    }
    else {
        printf("%d is not a special number",number);
    }
    
}