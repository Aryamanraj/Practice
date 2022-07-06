#include <iostream>
#include <string>
using namespace std;



void bubble_sort(string arr[], int n){
    int counter=1;
    while (counter<n)
    {
        for (int i = 0; i < n-counter; i++)
        {
            if (arr[i]>arr[i+1])
            {
                string temp;
                temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
            }
        counter++;
        }
    }

int main(){
    int n=5;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    bubble_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
