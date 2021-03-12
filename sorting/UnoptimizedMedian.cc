#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int a[],int l, int r){
    int pivot=a[r],i=l-1;
    for(int j=l;j<r;j++){
        if(a[j]<pivot){
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[r]);

    return i+1;
}
void QuickSort(int a[],int l, int r){
    int pivot;
    if(l<r){
        pivot=partition(a,l,r);
        QuickSort(a,l,pivot-1);
        QuickSort(a,pivot+1,r);
    }
}
void Display(int a[],int n){
 for(int i=0;i<n;i++){
     cout<<a[i]<<" ";
 }   
}
void median(int a[],int n){
int med;
 if(n%2==0){
     med=a[n/2]+a[(n+1)/2];
     cout<<med;
 }else if(n%2!=0){
     med=a[n/2];
     cout<<med;
 }   

}
int main(){
    int n;
    cin>>n;
    int a[10];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    QuickSort(a,0,n-1);

    median(a,n);
}