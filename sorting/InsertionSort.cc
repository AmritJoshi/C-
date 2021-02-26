/*WAP to implement a Insertion sort in an array*/
#include<iostream>
using namespace std;
void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
int n,i,j,temp,index;
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
for(i=1;i<n;i++){
    temp=a[i];
    j=i-1;
    while(a[j]>temp && j>=0){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
}
display(a,n);
}