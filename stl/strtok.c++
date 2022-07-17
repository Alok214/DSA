#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
char s[100]="My name is alok kumar";
char *p = strtok(s," ");
cout<<p<<endl;
while (p!=NULL)
{
    p=strtok(NULL," "); 
    cout<<p<<endl;
}

// string s="123";
// int a=stoi(s);
// cout<<a<<endl;
// cout<<a-3<<endl;
}