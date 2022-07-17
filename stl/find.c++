#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5]={1,12,13,4,5};
    
    auto it=find(a,a+5,112);
    int index=it-a;
    if(index==5){
        cout<<"Not pre";
    }
    else{
        cout<<index;
    }
}