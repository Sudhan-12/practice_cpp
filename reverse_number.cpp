#include <iostream>
using namespace std;
int main(){
    int number;
    int reverseNumber=0;
    cout<<"Enter the number:"<<endl;
    cin>>number;
    if(number==0){
        cout<<"You have entered 0";
    }
    else if(number<0){
        number*=(-1);
    }
    while(number>0){
        reverseNumber*=10;
        reverseNumber+=number%10;
        number=number/10;
    }
    cout<<reverseNumber;
    return 0;
}