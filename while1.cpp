#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int count=0;
    if(n==0){
        cout<<"You have entered zero"<<endl;
    }
    else if(n<0){
        n=n*(-1);
    }
    while(n>0){
        n=n/10;
        count=count+1;
    }
    cout<<count<<endl;
    cout<<INT_MAX<<endl;
    return 0;
}