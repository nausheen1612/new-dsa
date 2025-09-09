#include<stdio.h>
int countDigits(int n){
    int count=0;
    while(n>0){
        n/=10;
        count++;
    }
    return count;
}
   int main(){
    int n;
    printf("enter a natural number:");
    scanf("%d",&n);
    printf("no. of digits=%d\n",countDigits(n));
    return 0; 
   }
