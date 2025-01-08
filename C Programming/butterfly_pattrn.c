#include <stdio.h>
int main() {
    int n;
    printf("enter number of rows: ");
    scanf("%d",&n);
    //Upper Part of Butterfly
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(int j=1;j<=2*n-2*i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    //Lower Part of Butterfly
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(int j=1;j<=2*n-2*i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
}
}
