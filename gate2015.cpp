#include<stdio.h>
struct car{
	char name[100];
	int cap;
	float mileage;
};
int main(){
	struct car c[100];
	int n,i;
	printf("Enter the no of cars: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter details for car %d:",i+1);
		printf("\nName :");
		scanf("%s",c[i].name);
		printf("Fuel capacity: ");
		scanf("%d",&c[i].cap);
		printf("Mileage is ");
		scanf("%f",&c[i].mileage);
		
	}
	printf("\nInformation of cars:");
	for(i=0;i<n;i++){
		printf("\nEnter details for car %d:",i+1);
		printf("\nName :");
		printf("%s",c[i].name);
		printf("\nFuel capacity: ");
		printf("%d",c[i].cap);
		printf("\nMileage is ");
		printf("%f",c[i].mileage);
		printf("\n");
	}
	return 0;
}
