#include <stdio.h>
int main() {
    int month;
    printf("enter a month:");
    scanf("%d",&month);
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
        printf("31 days in a month");
    }
    else if(month==4||month==6||month==9||month==11) {
        printf("30 days in a month");
    }
    else if(month==2){
        printf("28 or 29 days in a month");
    
    }
    else{
        printf("not a valid month. Please enter a value between 1 and 12");
    }

}
