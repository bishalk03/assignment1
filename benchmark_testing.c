#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void selection_sort(long long int *arr,long long int n){
    long long int index_of_min;
    for(long long int i=0;i<n;i++){
        index_of_min=i;
        for(long long int j=i+1;j<n;j++){
            if(arr[j]<arr[index_of_min]){
                index_of_min=j;
            }
            
        }
        long long int temp=arr[i];
            arr[i]=arr[index_of_min];
            arr[index_of_min]=temp;
    }
   
}
void bubble_sort(long long int *arr,long long int n){
    long long int temp;
    long long int issorted;
    for(long long int i=0;i<n-1;i++){
        issorted=1;
        for(long long int j=0;j<n-1-i;j++){
            if(arr[j+1]>arr[j]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                issorted=0;
            }
        }
        if(issorted){
            return;
        }
    }
}
int main()
{
    long long int size;
    printf("enetr size\n");
    scanf("%llu", &size);
    long long int *arr = (long long int *)malloc(size * sizeof(long long int));
    for (long long int i = 0; i < size; i++)
    {
        arr[i]=i;
    }
    clock_t start1, end1;
    long int t;
    start1 = clock();
    selection_sort(arr,size);
        end1 = clock();
    t = end1 - start1;
    printf("Total elapsed time (selection sort): % f\n", (double)t / (double)CLOCKS_PER_SEC);

    clock_t start2, end2;
    long int x;
    start2 = clock();
    bubble_sort(arr,size);
        end2 = clock();
    x = end2 - start2;
    printf("Total elapsed time (bubble sort): % f\n", (double)x / (double)CLOCKS_PER_SEC);
}
