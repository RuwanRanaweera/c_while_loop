#include<stdio.h>
void main(){
	
	char name[50],indexno[10];
	int duration;
	printf("Enter name: ");
	scanf("%[^\n]s",name);
	
	printf("Enter index no: ");
	getchar();
	scanf("%s",indexno);
	
	printf("Enter duration: ");
	scanf("%d",&duration);
	
	printf("-----------output----------\n");
	
	printf("Index no: %s\n",indexno);
	printf("Student name: %s\n",name);
	printf("Duration %d\n",duration);
	
	double totFee = 200.0;
	double initialFee= 200;
	int x= 2;
	while(x<=duration){
		initialFee=initialFee * 1.05;
		totFee=totFee + initialFee;
		x++;
	}
	
	printf("Total fee %.2lf\n",totFee);
	
	
}