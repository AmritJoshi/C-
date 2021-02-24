/*Q. WAP TO PRINT FOLLOWING PATTERN.
       *
      * *
     * * *
    * * * *
   * * * * *
  * * * * * *
 * * * * * * *
* * * * * * * *
*/
#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++)
			printf(" ");
		for(j=0;j<i;j++)
			printf("* ");	
		printf("\n");
	}
	return 0;
}
