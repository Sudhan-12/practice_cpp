#include <iostream>
using namespace std;
int main(){
    int number,factorial=1;
    cout<<"Enter the number to find the factorial"<<endl;
    cin>>number;
    for(int i=1;i<=number;i++){
        factorial=factorial*i;
    }
    cout<<factorial;
    return 0;
}