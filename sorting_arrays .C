//// sort the unsorted array into sorted array I use Bubble sort for sorting //

/// time complexity is O(n^2)///

// space complexity is O(1)///

 
#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    int temp;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("************************\n");
    for(int i=0;i<size;i++){
            for(int j =i+1;j<size;j++){
                  if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            }}
    for(int i = 0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}
