/*Q. WAP TO PRINT FOLLOWING PATTERN.
12345
 1234
  123
   12
    1
*/
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++)
			printf(" ");
		for(j=1;j<n-i+1;j++)
			printf("%d",j);
			
	printf("\n");
	}
	return 0;
}
