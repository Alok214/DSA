#include<bits/stdc++.h>
using namespace std;
struct Queue
{
    int *arr;
    int fr,re;
    int cap;
    Queue(int c){
        cap=c;
        fr=re=0;
        arr=new int[cap];
    }
    void enque(int x){
    if(re==cap-1){cout<<"FULL\n"; return;}
    arr[re]=x;
    re++;
    }
    int deque(){
        if(fr<0 || fr>=re){cout<<"Empty "; return -1;}
        int a=arr[fr];
        fr++;
        return a;
    }
    int front(){
        if(fr==-1 || fr>re) return -1;
        return arr[fr];
    }
    int size(){
        return (re-fr);
    }
    bool empty(){
        return (fr>=re);
    }
    void print(){
        for(int i=fr;i<re;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
Queue q(5);
q.enque(3);
q.enque(4);
q.enque(5);
q.enque(6);
q.print();
cout<<endl;
// // q.enque(7);
// cout<<q.deque();
// cout<<endl;
// cout<<q.deque();
// cout<<endl;
// cout<<q.deque();
// cout<<endl;
// cout<<q.deque();
// cout<<endl;
// cout<<q.deque();
// cout<<endl;
// cout<<q.empty();
// cout<<endl;
// cout<<q.front();
// cout<<endl;
cout<<q.size();
// cout<<q.deque();

}