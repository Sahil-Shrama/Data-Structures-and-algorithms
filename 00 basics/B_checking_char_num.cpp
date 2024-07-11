//checking wheather the character is uppercase, lowercase, number

#include<iostream>
using namespace std;

void check(char chr){
    if(chr>='A' && chr<='Z'){
        cout<<"vlue is uppercase"<<endl;

    }
    else if(chr>=97 && chr<=122){
        cout<<"value is a lowercase"<<endl;
    }
    else if(chr>=48 && chr<=57){
        cout<<"it is a number"<<endl;
    }

    else{
        cout<<"it is a special character"<<endl;
    }

}

int main(){
char ch;
cout<<"Enter the character"<<endl;
cin>>ch;
check(ch);
return 0;

}