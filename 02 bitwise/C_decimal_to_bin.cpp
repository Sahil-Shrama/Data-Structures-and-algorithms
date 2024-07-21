#include <iostream>
#include<math.h>
using namespace std;


void binary(int num){
    int i =0,ans=0;
while(num!=0){
    if(num%10==1){
     ans = ans + pow(2,i) ;

    }
    i++;
    num = num/10;
}
cout <<ans<<endl;


}


int main(){
int num ;
cout<<"enter the binary number"<<endl;
cin>>num;
binary(num);



}