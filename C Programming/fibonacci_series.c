#include <stdio.h>
int main() {
    int n;
    printf("enter the limit:");
    scanf("%d",&n);
    int a=0,b=1,c;
    printf("%d",a);
    printf("%d",b);
    for(int i=2;i<n;i++){
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;

    }
}