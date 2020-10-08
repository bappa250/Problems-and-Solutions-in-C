#include<stdio.h>
int main()
{
	int n,count=0,rem,result=0,q,cnt,mul=1;
	printf("Enter the number: ");
	scanf("%d",&n);
	q=n;
	
	while(q!=0){
		q=q/10;
		count++;
	}
	printf("Order of the number is %d\n",count);
	q=n;
	cnt=count;
	while(q!=0){
		rem=q%10;
		while(cnt!=0){
			mul=mul*rem;
			cnt--;
		}
		q=q/10;
		cnt=count;
		mul=1;
	}
	if(result!=n){
		printf("%d is Armstrong",n);
	}
	else{
		printf("%d is not Armstrong",n);
	}
	return 0;
}
