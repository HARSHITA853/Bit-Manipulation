#include<stdio.h>
void count(int n){
    for (int i=1;i<n+1;i++){
        int data1=i,c=0,data2=i;
        while(data1!=0){
            if(data1&1){
                c++;
            }
            data1=data1>>1;
        }
        printf("%d has %d set bits\n",data2,c);


    }
}
int main(){
    printf("enter the value of n: ");
    int n;
    scanf("%d",&n);
    count(n);
}