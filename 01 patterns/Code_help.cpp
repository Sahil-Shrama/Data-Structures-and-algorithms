#include<iostream>
using namespace std;

void num_square(){
    int i =1,n,j;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<endl;

   i++;
    }
}



void formulala_triangle1(){
    int i =1,n,j;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<i+j-1;
            j++;
        }
        cout<<endl;

   i++;
    }
}



void formulala_triangle2(){
    int i =1,n,j;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<i-j+1;
            j++;
        }
        cout<<endl;

   i++;
    }
}



void char_square(){
    int i =1,n,j;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    while(i<=n){
        j=1;
        char A='A'+i-j;
        while(j<=i){
            cout<<A;
            j++;
        }
        cout<<endl;

   i++;
    }
}

void char_square2(){
    int i =1,n,j;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=i){
        char A='A'+j-1;
            cout<<A;
            j++;
        }
        cout<<endl;

   i++;
    }
}


void char_square3(){
    int i =1,n,j;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    while(i<=n){
        j=1;
        char A='A'+i-1;
        while(j<=i){
            cout<<A;
            A++;
            j++;
        }
        cout<<endl;

   i++;
    }
}


void char_triangle(){
    int i =1,n,j;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    while(i<=n){
        j=1;
        char A='A'+i-1;
        while(j<=n){
            cout<<A;
            A++;
            j++;
        }
        cout<<endl;

   i++;
    }
}




void final(){
    int i =1,n,j,k,l,m;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    while(i<=n){
        j=1;
       while(j<=n-i+1){
            cout<<j;
            j++;
        }
        
         k=1;
         while(k<=i-1){
            cout<<"*";
            k++;
         }

         l=n;
         while(l>n-i+1){
            cout<<"*";
            l--;
         }

        m=n;
       while(m>=1){
            cout<<m;
            m--;
        }
        cout<<endl;

   i++;
    }
}




int main(){
    // num_square();
    // formulala_triangle1();
    //  formulala_triangle2();
    // char_square();
    // char_square2();
    //   char_square3();
    final();


    return 0;
}