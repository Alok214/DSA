#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// void inc(int *a){
//     *a=*a+2;
// }
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
void inc(int a[]){
    for (int i = 0; i < 4; i++)
    {
        a[i]=a[i]+3;
    }  
}
int main(){
    // int a=10;
    // int *p=&a;
    // cout<<p<<endl;
    // p++;
    // cout<<p<<endl;
    // cout<<sizeof(int);
    // int a[]={4,6,16,7,8};
   // cout<<a[1]<<endl;
    // for (int i = 0; i <5; i++)
    // {
    //    cout<<*(a+i)<<endl;
    // }
    // int a=2;
    // int *p=&a; 
    // inc(p);
    // cout<<a;
    // int a=4,b=7;
    // swap(&a,&b);
    // cout<<a<<" "<<b;
    int a[]={4,5,6,7};
    inc(a);
    for (int i = 0; i < 4; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
}