#include <stdio.h>
int main(){
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int mat[50][50];
    printf("enter array elements:\n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("row sum:\n");
    for(int i=0;i<n;i++){
        int rowsum=0;
        for(int j=0;j<n;j++){
            rowsum=rowsum+mat[i][j];
        }
        printf("%d\n",rowsum);
    }
    printf("column sum:\n");
    for(int j=0;j<n;j++){
        int columnsum=0;
        for(int i=0;i<n;i++){
            columnsum=columnsum+mat[i][j];
        }
        printf("%d\n",columnsum);
    }
}



































 