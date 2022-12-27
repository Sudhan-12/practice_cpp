#include <iostream>
using namespace std;
int main(){
    int hostNumber,guestNumber;
    cout<<"host:";
    cin>>hostNumber;
    system("cls");//clears the console
    cout<<"Guest"<<endl;
    cout<<"You have  5 chances to guess the number"<<endl;
    for(int i=0;i<5;i++){
        cout<<"enter the guess number";
        cin>>guestNumber;
    if(hostNumber==guestNumber){
        cout<<"Correct!";
        break;
    }
    else{
        cout<<"Failed!, better luck next time"<<endl;
    }
    }
    return 0;
}