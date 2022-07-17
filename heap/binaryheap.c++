#include<bits/stdc++.h>
using namespace std;
struct heap
{
    int *ar;
    int size;
    int cap;
    heap(int c){
        cap=c;
        ar=new int[cap];
        size=0;
    }
    int left(int i) {return (2*i+1);}
    int right(int i) {return (2*i+2);}
    int par(int i) {return (i-1)/2;}
    void insert(int x){
    if(size==cap) return;
    size++; ar[size-1]=x;
    for(int i=size-1;i!=0 && ar[par(i)]>ar[i];){
        swap(ar[i],ar[par(i)]);
        i=par(i);
    }
    }
};

int main(){
heap h;

}