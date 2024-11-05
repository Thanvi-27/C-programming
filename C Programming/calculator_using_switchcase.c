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

    // Display results
    switch(n)
    {
        case 1:
        printf("%d+%d=%d",a,b,(a+b)));
        break;

        case 2:
        printf("%d-%d=%d",a,b,(a-b));
        break;

        case 3:
        printf("%d*%d=%d",a,b,(a*b));
        break;

        case 4:
        printf("%d/%d=%f",a,b,(a/b));
        break;

        default:
        printf("entered a wrong operator");
    }

}