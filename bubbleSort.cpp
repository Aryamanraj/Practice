#include <iostream>
#include <string>
using namespace std;

// // void swapf(int *ap, int *bp){
// //     int temp;
// //         *ap=temp;
// //         *ap=*bp;
// //         *bp=temp;
// // }

void bubble_sort(int arr[], int n){
    int counter=1;
    while (counter<n)
    {
        for (int i = 0; i < n-counter; i++)
        {
            if (arr[i]>arr[i+1])
            {
                int temp;
                temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
            }
        counter++;
        }
    }

void bubbleSort(int arr[], int n){
    int count=1;
    while (count<n)
    {
        for (int i = 0; i < n-count; i++)
        {
            if (arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
            
        }
    count++;
    }
}

int main(){
    int n=5;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    bubble_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    bubbleSort(arr,n);
    

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}
