#include<stdio.h>
int main(){
	int a[3][3],b[3][3],i,j,k,mul,sum=0,product[100][100];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
				printf("Element a[%d][%d] is ",i+1,j+1);
				scanf("%d",&a[i][j]);
				printf("Element b[%d][%d] is ",i+1,j+1);
				scanf("%d",&b[i][j]);
		}
	}
	printf("\n1st matrix is\n");
	for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
	printf("\n2nd matrix is\n");
	for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				mul=a[i][k]*b[k][j];
				sum+=mul;
			}
			product[i][j]=sum;
			sum=0;
		}
	}
	printf("\nResult matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",product[i][j]);
		}
		printf("\n");
	}
	return 0;
}
