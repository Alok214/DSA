#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T>
// OR template<class T>
int search(T a[],int n,T k){
    for (int i = 0; i < n; i++)
    {
        if(a[i]==k){
            cout<<"found ";
            return i;
        }
    }
    return -1;
}
int main(){
    // char a[]={'d','t','s','u','b'};
    // int n=sizeof(a)/sizeof(char);
    // char k='b';
    //cout<<search(a,n,k);
    // list<int> l;
    // for (int i = 0; i < 5; i++)
    // {  int t;
    //     cin>>t;
    //     l.push_back(t);
    // }
    // sort(l.begin(),l.end());
    // for (auto y:l)
    // {
    //     cout<<y<<" ";
    // }
    string s = "bca";
    do{
        cout<<s<<" ";
    }while(next_permutation(s.begin(),s.end()));
    cout<<s;
    

}