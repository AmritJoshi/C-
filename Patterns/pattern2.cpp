#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("%d",j+1);
		}
		printf("\n");
	}
}
