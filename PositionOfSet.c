#include<stdio.h>
#include<conio.h>
void position(int n){
    int i=0;
    while(n!=0){
        if((n & 1)==1){
            printf("set bit is at %d index\n",i);
        }
        i++;
        n=n>>1;
    }
}
int main(){
    printf("enter the number: ");
    int n;
    scanf("%d",&n);
    position(n);
    return 0;
}
