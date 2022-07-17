#include<iostream>
#include<deque>
using namespace std;
void printmax(int a[],int n,int k){
    deque<int> d;
    for(int i=0;i<k;i++){
        while(!d.empty() && a[i]>a[d.back()]){d.pop_back();}
        d.push_back(i);
    }
    for(int i=k;i<n;i++){
       cout<<a[d.front()]<<" ";
       while (!d.empty() && d.front()<=i-k){ d.pop_front(); }
       while (!d.empty() && a[i]>=a[d.back()]){ d.pop_back(); }
       d.push_back(i);
    }
    cout<<a[d.front()]<<" ";
}
int main(){
int n=9;
int a[n]={20,40,30,10,60,10,20,30,5};
printmax(a,9,3);
}