#include <iostream>
using namespace std;
int main(){
    char c1;
    cout<<"Enter a character"<<endl;
    cin>>c1;
    if((int)c1>=(int)'a' && (int)c1<='z'){
        cout<<"the character is a lower case"<<endl;
    }
    else if((int)c1>='A' && (int)c1<='Z'){
        cout<<"the character is upper case letter"<<endl;
    }
    else if((int)c1>='0' && (int)c1<='9'){
        cout<<"the character is a number"<<endl;
    }
    else{
        cout<<"the character is a speacial case"<<endl;
    }
    return 0;

}