#include <stdio.h>
int main() {
    int a;
    int b;
    printf("enter a value:");
    scanf("%d",&a);
    printf("enter b value:");
    scanf("%d",&b);
    if(a>b){
        printf("%d is largest number",a);
    }
    else{
        printf("%d is largest number",b);
    }
}
