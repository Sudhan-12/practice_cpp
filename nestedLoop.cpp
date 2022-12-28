#include <iostream>
using namespace std;
int main(){
    int grade,sum,avg;
    for(int i=1;i<=3;i++){
        do{
            cout<<"Enter grade "<<i<<endl;
            cin>>grade;
            sum+=grade;
        }while(grade<1 || grade>5);
    }
    avg=sum/3;
    cout<<avg;
    return 0;
}