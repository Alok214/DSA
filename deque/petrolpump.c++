#include<iostream>
#include<deque>
using namespace std;
int pp(int pet[],int dis[],int n){
    for(int i=0;i<n;i++){
        int cur=0;
        int end=i;
        while (true){
            cur+=(pet[i]-dis[i]);
            if(cur<0) break;
            end=(end+1)%n;
            if(i==end) return (i+1);
        }    
    }
}
int main(){
int n=4;
int pet[n]={4,8,7,4};
int dis[n]={6,5,3,5};
cout<<pp(pet,dis,n);
}