#include<stdio.h>
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int flag=0;
        for(int j=1;j<n-i;j++){
            if (arr[j]<arr[j-1]){
                flag=1;
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
        if(flag==0){
            return;
        }
    }
}
    int main(){
        int arr[]={5,1,4,2,8};
        int n=sizeof(arr)/sizeof(arr[0]);

        bubblesort(arr,n);

        printf("sorted array:");
        for(int i=0;i<n;i++){
            printf("%d",arr[i]);

        }   
        printf("\n");
        return 0;
     }