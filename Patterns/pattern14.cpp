/*Q. WAP TO PRINT FOLLOWING PATTERN.
      *
     ***
    *****
   *******
  *********
   *******
    *****
     ***
      *
*/
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<=n-i;j++)
			printf(" ");
		for(j=0;j<2*i+1;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<n;i++){
		for(j=0;j<i+2;j++)
			printf(" ");
		for(j=0;j<2*n-2*i-1;j++)
			printf("*");
		printf("\n");
	}
}