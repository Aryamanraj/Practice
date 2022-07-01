#include<iostream>
#include<string>
using namespace std;

int fre(int arr[], int n){
    int final = -1;
    for (int i = 0; i < n; i++)
    {
        int curr=arr[i];
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]==curr)
            {
                final = curr;
                break;
            }
        }
        
    }
    return final;
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