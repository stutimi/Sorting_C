#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {7,4,5,9,8,2,1};
    int n= 7;
    for(int i = 0; i<n; i++)
    {
        printf("%d",arr[i]);
    }
    for(int i = 0; i<n-1; i++){
        int min = INT_MAX;
        int minidx = -1;
        for(int j = i; j<=n-1; j++){
            if(min>arr[j]){
            min = arr[j];
            minidx = j;}
        }
    //swap the min and first element of unsorted part:
    //swap minindx and j:
    int temp = arr[minidx];
    arr[minidx] = arr[i];
    arr[i] = temp;
}
printf("\n");
printf("Sorted Array");
for(int i = 0; i<n; i++){
    printf("%d ",arr[i]);
}
return 0;
}