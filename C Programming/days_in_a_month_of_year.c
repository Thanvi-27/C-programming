#include <stdio.h>
int main() {
    int year, month;
    printf("enter a month: ");
    scanf("%d", &month);
    printf("enter a year: ");
    scanf("%d", &year);
    if (month >= 1 && month <= 12) {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            printf("Month has 31 days");
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11) {
            printf("Month has 30 days");
        }
        else if(month == 2) {
            if (year % 4 ==0) {
                printf("Month has 29 days");
            }
             else {
                printf("Month has 28 days");
            }
    } 
    else {
        printf("Not a valid month");
    }

}
}