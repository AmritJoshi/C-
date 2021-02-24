/*Q.  WAP TO PRINT FOLLOWING PATTERN.
54321
4321
321
21
1
*/
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++)
			printf("%d",n-j-i);	
		printf("\n");
	}
	return 0;
}
