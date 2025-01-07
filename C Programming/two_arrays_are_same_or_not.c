#include <stdio.h>
int main(){
    int n,m;
    printf("enter size of array1:");
    scanf("%d",&n);
    printf("enter size of array2:");
    scanf("%d",&m);
    int arr1[50];
    printf("enter array1 elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    int arr2[50];
    printf("enter array2 elements:\n");
    for(int j=0;j<n;j++){
        scanf("%d",&arr2[j]);
    }
    if (n!=m){
        printf("the arrays are not same");
    }
    else if(n==m){
        int sum1=0;
        for(int i=0;i<n;i++){
            sum1=sum1+arr1[i];
        }
        int sum2=0;
        for(int j=0;j<m;j++){
            sum2=sum2+arr2[j];
        }
        if(sum1==sum2){
            printf("the arrays are same");
               
            }
            else{
                printf("the arrays are not same");
            }

        }
        
    }
    