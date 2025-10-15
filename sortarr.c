#include<stdio.h>

void sortArray(int arr[],int n){  //ye function 0,1,2s wale arr ko sort karta hai
    int low=0,mid=0,high=n-1;
    int temp;
    while(mid<=high){
        if(arr[mid]==0){
            temp=arr[low];
            arr[low]=arr[mid];
            arr[mid]=temp;
            low++;
            mid++;

        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            temp=arr[mid];
            arr[mid]=arr[high];
            arr[high]=temp;
            high--;
        }
    }



}
int main(){
    int arr[]={0,2,1,2,1,0};
    int n=sizeof(arr)/sizeof(0);

    printf("original array:");
    for(int i=0;i<n;i++)
    printf("%d",arr[i]);

    sortArray(arr,n);
    printf("\nSorted array:");
    for(int i=0;i<n;i++)
    printf("%d",arr[i]);
    return 0;
}