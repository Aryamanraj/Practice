/*input
5
Ishita
Sriv
111111111
Aryaman
raj
22222222222
Simmi
Verma
33333333333
Mun
mun
4444444444444
Papa
own
555555555555
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string arr[1000];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
//count elements in array ----->
    int count=0;
    while(arr[count] != ""){
        count++;
    }
    int m = count;//passing the count value into the bubble sort part through n

    cout<<m;
}