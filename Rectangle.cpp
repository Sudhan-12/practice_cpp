#include <iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter the length and breadth of rectangle"<<endl;
    cin>>l>>b;
    for(int i=0;i<l;i++){
        for(int j=0;j<b;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}