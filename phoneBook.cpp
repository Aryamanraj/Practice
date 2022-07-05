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

    


    void printInfo(){
        cout<<"Name: ";
        cout << firstName + " " + lastName << endl;
        cout<<"Contact no.: ";
        cout << number << endl;
    };
};


phoneBook arr[1000];//global var
int i=0;//global var


//case 1
void save(){
    cout<<"Enter First Name: ";
    cin>>arr[i].firstName;
    //cout<<"\n";
    cout<<"Enter Last Name: ";
    cin>>arr[i].lastName;
    //cout<<"\n";
    cout<<"Enter Contact Number: "; 
    cin>>arr[i].number;
    //cout<<"\n";
    i++;
}


//case 2
void printarr(int j){
    arr[j].printInfo();
}


//case 3
int linearSearchFname(string key){

    //count elements in array ----->
    int count=0;
    while(arr[count].firstName != ""){
        count++;
    }


    //Linear Search ---->
    for (int k = 0; k < count; k++)
    {
        if (arr[k].firstName == key)
        {
            return k;
        }
        
    }
    return -1;
}


int main(){
    int c;
    while(c!=6){
        cout<<"What do you want to do?\n1. Save a contact.\n2. Print using key.\n3. Search Using First Name.\n6. Exit"<<endl;
        cout<<"Choice: ";
        cin>> c;
        switch (c)
        {
        case 1:
            save();
            cout<<"\n";
            cout<<"------------"<<endl;
            cout<<"\n";
            break;
        case 2:
            int j;
            cout<<"Enter the key: ";
            cin>>j;
            printarr(j);
            cout<<"\n";
            cout<<"------------"<<endl;
            cout<<"\n";
            break;
        case 3:{
            string key;
            cout<<"Enter First Name: ";
            cin>>key;
            cout<<"\n";
            int k = linearSearchFname(key);
            printarr(k);
            cout<<"\n";
            cout<<"------------"<<endl;
            cout<<"\n";
            break;
        }
        case 6:
            break;
        }
    }
}