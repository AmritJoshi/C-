/*WAP to implement a Selection sort in an array*/
#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
   int n,i,j,temp,index;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++){
       cin>>arr[i];
   }
   for(i=0;i<n-1;i++){
       temp=arr[i];
       index=i;
       for(j=i+1;j<n;j++){
           if(arr[j]<temp){
               temp=arr[j];
               index=j;
               swap(&arr[i],&arr[j]);
           }
       }
   }
   display(arr,n);
   return 0; 
}