#include <stdio.h>
int main() {
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int i;
    for(i=1;i<=10;i++){
        printf("%d*%d=%d\n",n,i,n*i);
    }
}