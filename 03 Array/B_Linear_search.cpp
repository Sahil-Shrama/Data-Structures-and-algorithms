#include <iostream>
using namespace std;

int LInear_search(int ar[],int n){
    cout<<"enter the element you want to search ";
    int val;
    cin>>val;
    for(int i =0 ; i<n;i++){
        if(ar[i]==val){
            cout<<"elemnt found at index "<<i<<endl;
            return 1;
        }
    }

 return -1;
}


int main(){
    int arr[1000] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
  int num =  LInear_search(arr,size);
    if(num==-1){

    cout<<"element is no present in array"<<endl;
    }
    
}