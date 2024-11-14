#include <stdio.h>
int main() {
    int a,b;
    printf("enter a value:");
    scanf("%d",&a);
    printf("enter b value:");
    scanf("%d",&b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("a value after swapping is %d\n",a);
    printf("b value after swapping is %d\n",b);
}