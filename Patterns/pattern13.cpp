/*Q. WAP TO PRINT FOLLOWING PATTERN.
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
	for(i=0;i<n;i++){
		for(j=0;j<i;j++)
			printf(" ");
		for(j=1;j<2*n-2*i;j++)
			printf("%d",j);
			
	printf("\n");
	}
	return 0;
}
