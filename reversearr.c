
// while loop

#include<stdio.h>
void reverse(int arr[]){
    int i=0;
    int j=7;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
 int arr[8]={1,3,5,7,2,4,7,8};
 reverse(arr);
 for(int i=0;i<8;i++){
    printf("%d",arr[i]);
 }
 return 0;
}

