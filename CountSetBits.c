#include <stdio.h>
#include<conio.h>

int countSetBits(int n) {
    int count = 0;
    while (n!=0) {
        if(n&1==1){ 
            count++;}
        n >>= 1;        
    }
    return count;
}

int main() {
    int num = 15; 
    printf("Number of set bits: %d\n", countSetBits(num));
    return 0;
}
