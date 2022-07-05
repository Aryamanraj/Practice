#include<iostream>
#include<string>
using namespace std;

class phoneBook{
    public:

    string firstName;
    string lastName;
    string number;

    phoneBook(string f, string l, string num){
        firstName = f;
        lastName = l;
        number = num;

    }

    phoneBook(){

    }
    // void saveContact(string fN, string lN, string numr){
    //     cout<<"Enter First Name: ";
    //     cin>>fN;
    //     cout<<"\n";
    //     cout<<"Enter Last Name: ";
    //     cout<<"\n";
    //     cin>>lN;
    //     cout<<"Enter Contact Number: "; 
    //     cin>>numr;
    //     cout<<"\n";
    //     phoneBook(fN, lN, numr);
    // }
    // void printnumr(string num){
    //     cout<<
    // }
    void printInfo(){
        cout<<"Name: ";
        cout << firstName + " " + lastName << endl;
        cout<<"Contact no.: ";
        cout << number << endl;
    };
};

phoneBook arr[1000];
int i=0;
void save(){
    cout<<"Enter First Name: ";
    cin>>arr[i].firstName;
    cout<<"\n";
    cout<<"Enter Last Name: ";
    cin>>arr[i].lastName;
    cout<<"\n";
    cout<<"Enter Contact Number: "; 
    cin>>arr[i].number;
    cout<<"\n";
    i++;
}

void printarr(int j){
    arr[j].printInfo();
}

int main(){
    int c;
    while(c!=6){
        cout<<"What do you want to do?\n1. Save a contact.\n2. Print using key.\n6. Exit"<<endl;
        cout<<"Choice: ";
        cin>> c;
        switch (c)
        {
        case 1:
            save();
            cout<<"\n";
            break;
        case 2:
            int j;
            cout<<"Enter the key: ";
            cin>>j;
            printarr(j);
            cout<<"\n";
            break;
        case 6:
            break;
        }
    }
}