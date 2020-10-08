#include<stdio.h>
int main(){
	int n,a=0,b=1,result=0,i;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d\t",a);
		result=a+b;
		a=b;
		b=result;
	}
	return 0;
}
