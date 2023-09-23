#include <stdio.h>
int main(){
    int i,n,j;
    int a[5];                
    printf("Enter New Array Length:");
    scanf("%d",&j);
    for(i=0;i<j;i++){              
        printf("Element Number %d:",i+1);
        scanf("%d",&a[i]);
    }
    n=sizeof(a)/sizeof(a[0]);
    if (j==n+1){
        printf("Stack is Overflow");
    }
    else{
        printf("New Stack Array: ");
        for(i=j-1;i>=0;i--){
            printf("%d ",a[i]);
        }
    }
    return 0;
}