#include<bits/stdc++.h>
using namespace std;
int lp(int a[],int l,int h,int pivot){
    swap(a[pivot],a[h]);
//  pivot=a[h];
int i=l-1;
for (int j = 0; j <=h-1; j++)
{
 if(a[j]<pivot){
     i++;
     swap(a[i],a[j]);
 }
}
swap(a[i+1],a[h]);
return i+1;
}
int main(){
    int a[7]={10,80,30,90,40,50,70};
    int x=lp(a,0,6,5);
    cout<<x<<endl;
    for(int i=0;i<7;i++){
    cout<<a[i]<<" ";
}

}