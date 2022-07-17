#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
int ct=0;
while(n>0){
//	if(n%2!=0){
//		ct++;
//	}
//	n=n/2;

// OR

	// if(n&1==1){
	// 	ct++;
	// }
	// n=n>>1;

// OR 
n=n&(n-1);
ct++;
}
cout<<ct;
}
