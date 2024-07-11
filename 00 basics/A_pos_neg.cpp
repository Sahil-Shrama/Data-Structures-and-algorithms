#include<iostream>
using namespace std;

//program to find postive negative or zero


void fun(int n){
    
if(n>0){
    cout<<"value is positive"<<endl;
}
else if(n==0){
    cout<<"value i9s zero"<<endl;
}
else{
    cout<<"value is negative"<<endl;
}

}

int main(){
    int n;
cout<<"Enter the value for chechking"<<endl;
cin>>n;

fun(n);

    return 0;
}