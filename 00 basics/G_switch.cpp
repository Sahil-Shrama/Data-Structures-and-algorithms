#include<iostream>
using namespace std;

//! count no of rupees of note


int main(){
int n,num,op=0;
cout<<"enter the total amount"<<endl;
cin>>num;
n= num;
while(n!=0){

if(n>100){
num =100;
}
else if(n>50){
    num =50;
}
else if(n>10){
num =10;
}
else if(num>2){
num =2;
}
else{
    num =1;
}



switch(num){
    case 100:
    cout <<"total 100 rupee notes "<<n/100<<endl;
  op = (n/100) *100 ;

    n =n- op;
    break;

    case 50:
    cout <<"total 50 rupee notes "<<n/50<<endl;
     op = (n/50)*50;
    
    n =n - op;
    break;


    case 10:
    cout <<"total 10 rupee notes "<<n/10<<endl;
     op = (n/10)*10;
    n =n-op;
    break;


    case 2:
    cout <<"total 2 rupee notes "<<n/2<<endl;
     op = (n/2)*2;
    n =n- op;

    break;

    case 1:
    cout <<"total 1 rupee notes "<<n/1<<endl;
    op = 1;
    n = n-op;

    break;


    default:
    cout<<"output is 0"<<endl;
     break;

}

}




}