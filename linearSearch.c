#include <stdio.h>
int linearSearch(int arr[],int n,int x){
    int i;
    for (i=0;i<n;i++){
        if (arr[i]==x){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,x,i;
    int arr[5];
    printf("Enter Length Of Array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Element Number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nArray:");
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    printf("\n\n");
    n=sizeof(arr)/sizeof(arr[0]);
    printf("Enter Element for Searching: ");
    scanf("%d",&x);
    printf("Element %d index is %d\n",x,linearSearch(arr,n,x));
    return 0;
}
