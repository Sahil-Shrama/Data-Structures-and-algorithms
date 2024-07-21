#include<iostream>
#include<math.h>
using namespace std;



int power(int ii){
    int k=0,sol=1;
   if(ii==0){
    return 0;
   }


    while(k!=ii){
     sol = sol*10;
     k++;

    }
    return sol;

}

void positive(int n){

int answer=0,i=0;
while(n!=0){
 int rem = n%2;
 answer= (rem + power(i));
    i++;
    n=n/2;
}

cout<<answer<<endl;



}

void negative(int num){
int ans=0,i=0,n;
n = ~(num*1);


while(n!=0){
int bit = n&1;

if(n&1){
ans = bit + pow(10,i) ;

}

n>>1;
i++;
}



cout<<ans<<endl;


}


int main(){
    int num;
    cout<<"Enter the number to convert"<<endl;
    cin>>num;
    if(num>0){
        positive(num);
    }
    else if(num<0){
   negative(num);
    }
    else{
        cout<<"0"<<endl;
    }

}