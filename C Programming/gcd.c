#include <stdio.h>
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",gcd(a,b));
}