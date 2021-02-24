/*Q. WAP TO PRINT FOLLOWING PATTERN.
    1
   123
  12345
 1234567
123456789
 1234567
  12345
   123
    1
*/
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	for(i=0;i<=n+1;i=i+2){
		for(j=0;j<=n-i;j=j+2)
			printf(" ");
		for(j=1;j<i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=0;i<n;i=i+2){
	for(j=0;j<=i;j=j+2)
			printf(" ");
		for(j=1;j<n-i-1;j++){
			printf("%d",j);
		}
		printf("\n");
	}
}
