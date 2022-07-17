#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(){
        
    }
    person(string n,int a){
     name=n;
     age=a;
    }
};
class perCom{
public:
 bool operator()(person A,person B){
   return A.age<B.age;
 }
};
int main(){
// priority_queue<int> p; max heap
// priority_queue<int,vector<int>,greater<int>> p; //min heap

int n;
cin>>n;
priority_queue<person,vector<person>,perCom> pq;
for (int i = 0; i <n; i++){
    string name;
    int age;
    cin>>name>>age;
    person p(name,age);
    pq.push(p);
}
int k=3;
cout<<endl;
for (int i = 0; i < k; i++)
{
    person p=pq.top();
    cout<<p.name<<" "<<p.age<<endl;
    pq.pop();
}



}