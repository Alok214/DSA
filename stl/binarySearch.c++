#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=8;
    int a[8]={20,30,40,40,40,50,100,1100};
    bool pre=binary_search(a,a+5,12);
    if(pre){
        cout<<"pre";
    }
    else{
        cout<<"Not Pre";
    }

    cout<<endl;
    auto lb=lower_bound(a,a+n,40);
    cout<<lb-a<<endl;
    auto ub=upper_bound(a,a+n,40);
    cout<<ub-a<<endl;
}