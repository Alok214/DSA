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
    if((re+1)%cap==fr){cout<<"FULL\n"; return;}
    arr[re]=x;
    re=(re+1)%cap;;
    }
    int deque(){
        if(re==cap){cout<<"Empty "; return -1;}
        int a=arr[fr];
        fr=(fr+1)%cap;
        return a;
    }
    int front(){
        if(fr==-1 || fr>re) return -1;
        return arr[fr];
    }
    // int size(){
    //     return (re-fr);
    // }
    // bool empty(){
    //     return (fr>=re);
    // }
    void print(){
        int i=fr;
        do{
            cout<<arr[i]<<" ";
            i=(i+1)%cap;
        }while (i!=(re+1)%cap);
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
cout<<q.deque();
cout<<endl;
cout<<q.deque();
cout<<endl;
cout<<q.deque();
cout<<endl;
cout<<q.deque();
cout<<endl;
q.enque(16);
cout<<endl;
q.enque(14);
cout<<endl;
q.enque(24);
cout<<endl;
cout<<q.deque();
cout<<endl;
// cout<<q.deque();
// cout<<endl;
q.print();
cout<<q.empty();
cout<<endl;
// cout<<q.front();
// cout<<endl;
// cout<<q.size();
// cout<<q.deque();

}