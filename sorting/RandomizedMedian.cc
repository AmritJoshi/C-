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
int find(int arr[],int l,int r,int k){
    int pivot;
    if(l<r){
        randomization(arr,l,r);
        pivot=partition(arr,l,r);
        if(k==pivot){
            return arr[pivot];
        }else if(k<pivot){
            find(arr,l,pivot-1,k);
        }else{
            find(arr,pivot+1,r,k);
        }
    }
}

double Median(int arr[],int n){
    if(n%2!=0){
        return find(arr,0,n-1,n/2);
    }else{

        return find(arr,0,n-1,(((n-1)/2)+(n/2))/2);
    }
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
double k=Median(arr,n);
cout<<k;
}