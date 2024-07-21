#include<iostream>
using namespace std;
//doing basic operation on array
int initillize(int ar[]){
    int n;
cout<<"enter the size of array"<<endl;
cin>>n;
cout<<"enter the value of array"<<endl;
for(int i =0 ;i<n;i++){
    cin>>ar[i];
}

return n;
}



void print(int ar[],int z){
  cout<<"printing the values"<<endl;
  for(int i =0 ;i<z;i++)
  cout<<ar[i]<<" ";

cout<<endl;
}



int insert(int ar[],int z){
    int n,value ;

cout<<"enter the pos where you want to insert and its value "<<endl;
cin>>n>>value;
int sizee = z;
sizee++;z++;


for(int i =n-1;n<sizee;sizee--){
    ar[sizee]= ar[sizee-1];
    
}
ar[n-1]= value;

print(ar,z);
 return z;

}

int delete_arr(int ar[],int z){
  int n ;

cout<<"enter the pos where you want to delete value "<<endl;
cin>>n;
for(int i = n-1;i<z;i++){
    ar[i] = ar[i+1]; 

}
z--;
print(ar,z);
return z;
}

void update(int ar[],int z){
    int val,n;
 cout<<"enter the index and value you want to  upade"<<endl;
cin>>n>>val;
if(n<z){
    ar[n-1]=val;
}
else{
    cout<<"not in scope";
}

}



int main(){
int arr[1000] ;
int size;
cout<<"doing basic operation on array"<<endl;
cout<<"initillizing array"<<endl;
size= initillize(arr);
print(arr,size);
size = insert(arr,size);
delete_arr(arr,size);
update(arr,size);
}