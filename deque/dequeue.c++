#include<iostream>
using namespace std;
struct dequeue
{
    int *arr;
    int cap,cs; // cs=current size
    dequeue(int c){
        cap=c;
        arr=new int[c];
        cs=0;
    }
    bool full(){
        return (cs==cap);
    }
    bool empty(){
        return (cs==0);
    }
    void insert_rear(int x){
        if(full()) return;
        arr[cs]=x;
        cs++;
    }
    void delete_rear(){
        if(empty()) return;
        cs--;
    }
    int get_rear(){
        if(empty()) return -1;
        else return (cs-1);
    }
    void insert_front(int x){
        if(full()) return;
        for(int i=cs-1;i>=0;i--){
            arr[i+1]=arr[i];
            arr[0]=x;
            cs++;
        }
    }
    void del_front(){
        if(empty()) return;
        for(int i=0;i<cs-1;i++){
            arr[i]=arr[i+1];
        }
        cs--;
    }
    int get_front(){
        if(empty()) return -1;
        else return 0;
    }
    void print(){
         if(empty()) {cout<<"Empty"; return;}
         while (!empty())
         {
            cout<<get_front()<<" ";
            del_front();
         }
         
    }
};

int main(){
dequeue q(10);
q.insert_front(1);
q.insert_front(3);
q.insert_front(4);
q.print();
}