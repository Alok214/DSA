#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rev(int a[],int s,int e){
    while (s<=e)
    {
        swap(a[s],a[e]);
        s++;
        e--;
    }  
}
int main(){
    int n=5;
    int a[n]={1,2,3,4,5};
    int d=2;
//     for (int i = 0; i < d; i++)
//     {  int x=a[0];
//         for (int j = 0; j <n-1; j++)
//         {
//             a[j]=a[j+1];
//         }
//         a[n-1]=x;
//     }
//    for (int i = 0; i < n; i++)
//    {
//       cout<<a[i]<<" ";
//    }
rev(a,0,d-1);
rev(a,d,n-1);
rev(a,0,n-1);
for (int i = 0; i < n; i++)
   {
      cout<<a[i]<<" ";
   }
}