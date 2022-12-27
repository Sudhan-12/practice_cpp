#include <iostream>
using namespace std;
int main(){
    int cPin=1234, pin,counter;
    do{
        cout<<"Enter the pin"<<endl;
        cin>>pin;
        if(pin!=cPin){
            counter++;
            cout<<"Incorrect pin!!!"<<endl;
            cout<<"You have "<<3-counter<<" Attempts remaining"<<endl;
        }

    }while(counter<3 && pin!=cPin);
    if(counter>=3){
        cout<<"Maximumm number of attempts!!!"<<endl;
        cout<<"Card is Blocked"<<endl;
    }
    else{
        cout<<"Access Granted"<<endl;
    }
    return 0;
}