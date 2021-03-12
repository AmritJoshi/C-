#include<iostream>
#include<cstdlib>
using namespace std;
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int l,int r){
    //int n=r-l-1;
    //int temp=rand()%n;
    //swap(&arr[l+temp],&arr[r]);
    int pivot=arr[r],i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[r]);
    return i+1;
}

void randomization(int arr[],int l,int r){
int n=r-l-1;
if(n>0){
int temp=rand()%n;
swap(&arr[l+temp],&arr[r]);
}
}

void QuickSort(int arr[],int l, int r){
    int pivot;
    if(l<r){
        randomization(arr,l,r);
        pivot=partition(arr,l,r);
        QuickSort(arr,l,pivot-1);
        QuickSort(arr,pivot+1,r);
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    QuickSort(arr,0,n-1);

    display(arr,n);
}