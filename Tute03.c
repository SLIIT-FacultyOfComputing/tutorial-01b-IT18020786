#include <stdio.h>
int main() {
  	int i;
	int n;
  int sum = 0;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
		sum=sum + i;
	}
	printf("sum is:%d",sum);
	
  
  return 0;
}