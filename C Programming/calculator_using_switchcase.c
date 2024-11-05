#include <stdio.h>
int main() {
    int a;
    int b;
    printf("enter a value:");
    scanf("%d",&a);
    printf("enter b value:");
    scanf("%d",&b);
    int n;
    printf("enter a case:");
    scanf("%d",&n);
    int sum;
    sum=a+b;
    int diff;
    diff=a-b;
    int mult;
    mult=a*b;
    float div;
    div=a/b;
    switch(n)
    {
        case 1:
        printf("%d+%d=%d",a,b,sum);
        break;
        case 2:
        printf("%d-%d=%d",a,b,diff);
        break;
        case 3:
        printf("%d*%d=%d",a,b,mult);
        case 4:
        printf("%d/%d=%f",a,b,div);
        default:
        printf("entered a wrong operator");
    }

}