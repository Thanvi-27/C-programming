#include <stdio.h>
int main(){
    int weekday;
    printf("enter a case:");
    scanf("%d",&weekday);
    switch(weekday){
        case 1:
        printf("Sunday");
        break;
        case 2:
        printf("Monday");
        break;
        case 3:
        printf("Tuesday");
        break;
        case 4:
        printf("Wednesday");
        break;
        case 5:
        printf("Thursday");
        break;
        case 6:
        printf("Friday");
        break;
        case 7:
        printf("Saturday");
        break;
        default:
        printf("not a day in a week");
    }
    }
    
