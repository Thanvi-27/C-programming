#include <stdio.h>
int main() {
    // Read input value
    int units;
    printf("enter units:");
    scanf("%d",&units);
    
    float cost;
    if(units<=50){
        cost=units*0.25;
    }
    else if(units>50&&units<=100){
        cost=units*0.50;
    }
    else {
        cost=units*1;
    }

    printf("electricity bill is %f",cost);
}
