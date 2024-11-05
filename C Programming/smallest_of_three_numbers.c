#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    printf("enter a value:");
    scanf("%d",&a);
     printf("enter b value:");
    scanf("%d",&b);
     printf("enter c value:");
    scanf("%d",&c);
   if (a<b&&a<c) {
    printf("smallest number is %d\n",a);
   }
   else if (b<a&&b<c){
    printf("smallest number is %d\n",b);
   }
   else{
    printf("smallest number is %d\n",c);
   }
}