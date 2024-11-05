#include <stdio.h>
int main() {
    int units;
    float cost;
    printf("enter units:");
    scanf("%d",&units);
    if(units<=50){
        cost=units*0.25;
        printf("electricity bill is %f",cost);
    }
    else if(units>50&&units<=100){
        cost=units*0.50;
        printf("electricity bill is %f",cost);
    }
    else {
        cost=units*1;
        printf("electricity bill is %f",cost);

    }
}