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
    for (int k = 0; k < count-1; k++)
    {
        if (arr[k].firstName == key)
        {
            return k;
        }
        
    }
    return -1;
}


//case 4
void bubbleSortfname(){

//count elements in array ----->
    int count=0;
    while(arr[count].firstName != ""){
        count++;
    }
    int n = count-1;//passing the count value into the bubble sort part through n


//sorting --------->
    int counter=1;
    while (counter<n)
    {
        for (int i = 0; i < n-counter; i++)
        {
            if (arr[i].firstName>arr[i+1].firstName)
            {
                phoneBook temp;
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1]=temp;
            }
            }
        counter++;
        }
    
}


//case 5
void printAllContacts(){
    //count elements in array ----->
    int count=0;
    while(arr[count].firstName != ""){
        count++;
    }
    int n = count-1;//passing the count value into the bubble sort part through n

    for (int x = 0; x <= n; x++)
    {
        printarr(x);
    }
}




int main(){
    int c;
    while(c!=6){
        cout<<"What do you want to do?\n1. Save a contact.\n2. Print using key.\n3. Search Using First Name.\n4. Sort the contacts\n5. Print all contacts\n6. Exit"<<endl;
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
        case 4:
            bubbleSortfname();
            cout<<"Sorting completed, use option 5 to view all contacts."<<endl;
            cout<<"\n";
            cout<<"------------"<<endl;
            cout<<"\n";
            break;
        case 5:
            cout<<"The List of all Contacts: "<<endl;
            printAllContacts();
            cout<<"\n";
            cout<<"------------"<<endl;
            cout<<"\n";
        case 6:
            break;
        }
    }
}