#include <iostream>
using namespace std;
int main(){
    float num1,num2;
    char opr;
    int n;
    cout<<"How many times you want this operation??";
    cin>>n;
    for(int i=0;i<n;i++){
    cout<<"Enter the operation you want to perform"<<endl;
    cin>>num1>>opr>>num2;
    switch (opr)
    {
    case '+':
    cout<<num1<<opr<<num2<<" = "<<num1+num2<<endl;
    break;
    case '-':
    cout<<num1<<opr<<num2<<" = "<<num1-num2<<endl;
    break;
    case '*':
    cout<<num1<<opr<<num2<<" = "<<num1*num2<<endl;
    break;
    case '/':
    cout<<num1<<opr<<num2<<" = "<<num1/num2<<endl;
    break;
    case '%':
    bool isNum1Int,isNum2Int;
    isNum1Int=((int)num1==num1);
    isNum2Int=((int)num2==num2);
    if(isNum1Int && isNum2Int){
        cout<<num1<<opr<<num2<<" = "<<(int)num1 % (int)num2<<endl;
    }
    else{
        cout<<"Invalid";
    }
    break;
    default:
    cout<<"Invalid operation"<<endl;
    break;
    } 
    }
    return 0;
    
}