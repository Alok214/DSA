#include<bits/stdc++.h>
using namespace std;
void bin(int a[],int n,int k){
    int s=0,e=n-1;
    while (e>=s)
    { int m=(s+e)/2;
       if(k==a[m]){
          cout<<"Found";
          return;
       } 
       if(k>a[m]){
           s=m+1;
       }
       if(k<a[m]){
           e=m-1;
       }
    }
    cout<<"Not found";
}

// iterative
// int bin(int a[],int l,int h,int x){
//     if(l>h) return -1;
//     int m=(l+h)/2;
//     if(x==a[m]){
//         cout<<"Found ";
//         return m;
//     } 
//     if(x>a[m]){
//         return bin(a,m+1,h,x);
//     }
//     if(x<a[m]){
//         return bin(a,l,m-1,x);
//     }
//     // cout<<"Not Found";
// }


// // index of first occurance 
// int bin(int a[],int l,int h,int x){
//     if(l>h) return -1;
//     int m=(l+h)/2;
//     if(x==a[m]){
//         if(a[m-1]!=x){
//         // cout<<"Found ";
//         return m;
//         }
//         else{
//             h=m-1;
//         }
//     } 
//     else if(x>a[m]){
//         return bin(a,m+1,h,x);
//     }
//     else if(x<a[m]){
//         return bin(a,l,m-1,x);
//     }
// }

int main(){
 int a[6]={10,10,10,10,20,20};
bin(a,6,10);
}