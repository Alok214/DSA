#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
if(n==0 || n==1) {cout<<"NO"<<endl;
 return false;}
//  while (n!=1)
//  {  if(n%2!=0) {cout<<"NO"<<endl;
//  return false;}
//     n=n/2;
//  }
//  {cout<<"yes"<<endl;
//  return true;}

// or
 if((n&(n-1))==0){
     cout<<"True"<<endl;
 }
 else cout<<"False";

}
