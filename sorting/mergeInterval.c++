#include<bits/stdc++.h>
using namespace std;
class Interval{
    public:
    int st;
    int end;  
};
bool comp(Interval i1,Interval i2){
    return i1.st<i2.st;
}
void mi(Interval a[],int n){
    sort(a,a+n,comp);
    int res=0;
    for (int i = 1; i <n; i++){
       if(a[res].end>=a[i].st){
           a[res].end=max(a[res].end,a[i].end);
           a[res].st=min(a[res].st,a[i].st);
       } 
       else{ res++;
       a[res]=a[i];}
    }
   for (int i = 0; i <=res; i++)
   {
       cout<<a[i].st<<" "<<a[i].end<<endl;
   }  
}
int main(){
    int n;
    cin>>n;
   Interval a[n];
   for (int i = 0; i < n; i++)
   {
       int x,y;
       cin>>x>>y;
       a[i]={x,y};
   }
   mi(a,n);
   
}