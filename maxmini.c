// #include<stdio.h>
// int main(){
//     int arr[9]={17,5,9,13,5,37,57};
    
//     int max = -1;
//     int min = 0;
//     for(int i=0;i<=8;i++)
//     {
//         if(max<arr[i]){
//             max=arr[i];

//         }
//         if(min>arr[i]){
//             min=arr[i];
//         }
//     }
//     printf("The minimum element is:%d\n",min);
//     printf("The maximum element is:%d\n",max);
//     return 0;
// }
#include <stdio.h>

int main() {
    int arr[] = {22, 11, 44, 55, 33,76,58,46,96};
    int n = sizeof(arr) / sizeof(arr[0]); 

    
    if (n == 0) {
        printf("The array is empty.\n");
        return 1;
    }

   
    int min = arr[0];
    int max = arr[0];

    
    for (int i = 1; i < n; i++) {
       
        if (arr[i] > max) {
            max = arr[i];
        }

        
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The minimum element is: %d\n", min);
    printf("The maximum element is: %d\n", max);

    return 0;
}