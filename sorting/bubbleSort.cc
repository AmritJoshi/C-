/* WAP to implement a bubble sort in an array*/
#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
void display(int a[],int n)
{
int i;
for(i=0;i<n;i++){
    cout << a[i]<<" ";
}
}
int main(){
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
            }
            
        }
    }
    display(a,n);
}