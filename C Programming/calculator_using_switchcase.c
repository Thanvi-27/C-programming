#include <stdio.h>

int main() {

    // Read Input Values
    int a, b;
    
    printf("enter a value:");
    scanf("%d",&a);

    printf("enter b value:");
    scanf("%d",&b);

    int n;
    printf("enter a case:");
    scanf("%d",&n);

    // Calculations
    int sum = sum=a+b;
    int diff = diff=a-b;
    int mult = a*b;
    float div = a/b;

    // Display results
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
        break;

        case 4:
        printf("%d/%d=%f",a,b,div);
        break;

        default:
        printf("entered a wrong operator");
    }

}