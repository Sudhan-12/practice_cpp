#include <iostream>
using namespace std;
int main(){
   /* int l,b;
    cout<<"Enter the length and breadth of rectangle"<<endl;
    cin>>l>>b;
    for(int i=0;i<l;i++){
        for(int j=0;j<b;j++){
            cout<<"* ";
        }
        cout<<endl;
    }*/
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
    }
    cout<<endl;
    return 0;
}