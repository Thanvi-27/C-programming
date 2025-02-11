#include <stdio.h>
void lcm(int a,int b,int c){
    int max=a*b*c;
    int min,i;
    if(a>b&&a>c){
        min=a;
    }
    else if(b>a&&b>c){
        min=b;
    }
    else{
        min=c;
    }
    for(i=min;i<=max;i++){
        if(i%a==0&&i%b==0&&i%c==0){
            break;
        }
    }
    printf("%d",i);
}
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    lcm(a,b,c);
}
