#include<iostream>
using namespace std;

void fibonacci_series(){
int a = 0,b=1,n,sum=0;
cout<<"enter the no of total values in series"<<endl;
cin>>n;
cout<<a<<" "<<b<<" ";
for(int i =2;i<n;i++){
    sum = a+b;
    cout<<sum<<" ";
    a=b;
    b=sum;
}

}



int main(){
fibonacci_series();
}