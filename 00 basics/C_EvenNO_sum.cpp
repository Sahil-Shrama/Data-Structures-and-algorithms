#include<iostream>
using namespace std;
// find sum of all even numbers

int sum(int nn){
int sum =0;
int i =1 ;
while(i<=nn){

 if(i%2==0){
    sum = sum +i;
 }


    i++;
} 

return sum;
}


int main(){
int n,soln;
cout<<"enter the last line to add up"<<endl;
cin>>n;
soln = sum(n);
cout<<"sum is : "<<soln<<endl;

    return 0;
}