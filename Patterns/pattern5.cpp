#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++)
			printf("*");	
		printf("\n");
	}
	return 0;
}
