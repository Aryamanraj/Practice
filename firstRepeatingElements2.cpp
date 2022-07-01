#include<iostream>
#include<string>
using namespace std;

int fre(int arr[], int n){
    int arr2[n+1];
    for (int i = 0; i < n; i++)
    {
        int curr=arr[i];
        arr[curr]=0;
    }
    
    }

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int final = fre(arr, n);
    cout << final << endl;
}