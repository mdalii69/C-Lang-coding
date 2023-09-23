#include <stdio.h>
int fun(int a,int n){
    while(a!=0){
    n=a%10;
    printf("%d",n);
    a=a/10;
    }
    return 0;
}
int main(){
    int a;
    printf("Enter Integer:");
    scanf("%d",&a);
    int n;
    fun(a,n);
    return 0;
}