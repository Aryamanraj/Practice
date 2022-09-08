#include <iostream>
#include <string>
using namespace std;


void merge(int arr[], int begin, int mid, int end){
    int leftEnd = mid - begin  +1;
    int rightEnd = end - mid;


    int leftArr[leftEnd];
    int rightArr[rightEnd];

    for (int i = 0; i < leftEnd; i++)
    {
        leftArr[i]=arr[begin+i];
    }
    for (int j = 0; j < rightEnd; j++)
    {
        rightArr[j] = arr[mid + 1 + j];
    }
    
    int indexLeftArr = 0;
    int indexRightArr = 0;
    int indexMergedArr = begin;


    while (indexLeftArr<leftEnd&&indexRightArr<rightEnd)
    {
        if (leftArr[indexLeftArr]<=rightArr[indexRightArr])
        {
            arr[indexMergedArr]=leftArr[indexLeftArr];
            indexLeftArr++;
        }
        else{
            arr[indexMergedArr]=rightArr[indexRightArr];
            indexRightArr++;
        }

        indexMergedArr++;
    }

    while (indexLeftArr<leftEnd)
    {
        arr[indexMergedArr]=leftArr[indexLeftArr];
        indexMergedArr++;
        indexLeftArr++;
    }

    while (indexRightArr<rightEnd)
    {
        arr[indexMergedArr]=rightArr[indexRightArr];
        indexMergedArr++;
        indexRightArr++;
    }
}

void mergeSort(int arr[], int begin, int end){
    if (begin >= end){
        return;
    } 
    int mid = (end+begin)/2;
    mergeSort(arr, begin, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, begin, mid, end);
}

void printArr(int n, int arr[]){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
int main(){

    int arr[]={2,7,5,6,5};
    int n=5;
    // for(int i=0; i<n; i++)
    // {
    //     cin>>arr[i];
    // }
    mergeSort(arr, 0, n-1);
    printArr(n, arr);
}