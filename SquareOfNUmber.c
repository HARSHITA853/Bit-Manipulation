#include<stdio.h>
int Square(int num){
    int temp=num,result=0;
    while(temp!=0)
    {
        if(temp&1){
            result+=num;
        }
        temp>>=1;
        num<<=1;
    }
    return result;
}
int main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
    int sq=Square(num);
    printf("The square of %d is: %d",num,sq);
    return 0;
}