#include <stdio.h>
int SumUniqueElements(int length,int arr[]){
  int sum=0;
  for(int i=0;i<length;i++){
    int d=0;
    for(int j=0;j<length;j++){
      if(arr[i]==arr[j]&&i!=j){
        d=1;
        break;  
      }
    }
    if(d==0){
      sum+=arr[i];
    }
  }
  printf("%d",sum);
}
int main()
{
  int length;
  scanf("%d",&length);
  int arr[10000];
  for(int i=0;i<length;i++){
    scanf("%d",&arr[i]);
  }
  SumUniqueElements(length,arr);
}