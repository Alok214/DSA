#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool com(int a,int b){
   // cout<<a<<" and "<<b<<endl;
    return a>b;
}
int main(){
    int a[5]={1,2,5,4,3};
    sort(a,a+5,com);
    //com: function name is passed as a parameter internally in sort function
    for (int i = 0; i < 5; i++)
    {
       cout<<a[i]<<" ";
    }
    
}
// passing function as a parameter
// eg. bool (&com)(int a,int b)