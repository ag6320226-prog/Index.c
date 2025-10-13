#include<stdio.h>
void sort(int arr[],int n){
    int i,j,temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main(){
    int arr[100],n,k,i;
    printf("Enter the size of arr:");
    scanf("%d",&n);

    printf("Entre %d element:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of k:");
    scanf("%d",&k);

    sort(arr,n);

    printf("Kth Maximum element=%d\n",arr[k-1]);
    printf("Kth Minimum element=%d\n",arr[n-k]);
    return 0;
}