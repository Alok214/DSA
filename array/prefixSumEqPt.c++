#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isEqPt(int a[],int n){
   int s=0;
   for (int i = 0; i < n; i++){
      s+=a[i];
   }
   int ls=0;
   for (int i = 0; i < n; i++)
   {
      if(ls==s-a[i]){
         cout<<"Found = "<<a[i]<<endl;
         return true;
      }
      ls+=a[i];
      s-=a[i];
   }
  return false;   
}
int main(){
int n=6;
int a[]{3,4,8,-9,20,6};
// for (int i = 0; i < n; i++)
// {
//     int ls=0,rs=0;
//     for (int j = 0; j < i; j++)
//     {
//        ls+=a[j];
//     }
//     for (int k =i+1; k < n; k++)
//     {
//        rs+=a[k];
//     }
//    if(ls==rs){
//        cout<<"Ele="<<a[i];
//        return 0; 
//    } 
// }
// cout<<"Not find";

// Method - 2
cout<<isEqPt(a,n);

}