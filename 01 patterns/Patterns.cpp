#include<iostream>
using namespace std;

void square(){
    int n;
 cout<<"enter the number of rows"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<"*";
    }
    cout<<endl;
}
}



void star_pattern(){
    int n;
 cout<<"enter the number of rows"<<endl;
    cin>>n;
    for(int i =1; i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }

}

void inverted_star(){
    int n;
 cout<<"enter the number of rows"<<endl;
    cin>>n;
    for(int i =n; i>=1;i--){
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void half_pyramid(){

    int n;
 cout<<"enter the number of rows"<<endl;
    cin>>n;
    for(int i =1; i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void char_pyramid(){

    int n;
    char A = 'A';
 cout<<"enter the number of rows"<<endl;
    cin>>n;
    for(int i =1; i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<A;
            A++;
        }
        cout<<endl;
    }
}

void hollow_rect(){
    int n,m;
 cout<<"enter the number of rows & coms"<<endl;
cin>>n>>m;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i==1||i==n||j==1||j==m){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}
}

int main(){
    // square();
    // star_pattern();
    // inverted_star();
    // half_pyramid();
    // char_pyramid();
    hollow_rect();
}