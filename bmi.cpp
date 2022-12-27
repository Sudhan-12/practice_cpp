#include <iostream>
#include <cmath>
using namespace std;
int main(){
    //BMI CALCULATOR
    //BMI= weight (Kg)/height*height(m)
    //Under weight <18.5
    //normal 18.5-24.9
    // over weight >25
    int w;
    double h;
    cout<<"Enter your weight in kg:"<<endl;
    cin>>w;
    cout<<"Enter your height in m"<<endl;
    cin>>h;
    double  bmi=w/(pow(h,2));
    if(bmi<=18.5){
        cout<<bmi<<"  UNDER WEIGHT"<<endl;
    }
    else if(bmi>18.5 && bmi<=24.9){
        cout<<bmi<<"  NORMAL"<<endl;
    }
    else{
        cout<<"OVER WEIGHT"<<endl;
    }
    return 0;

}  