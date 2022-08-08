#include<stdio.h>

int main(){
	int year;
	printf("Input years = ");
	scanf("%d", &year);
	if(year % 4){ 
	printf ("Feb = 28 days");
	}
	else{
	printf ("Feb = 29 days");
	}
	return 0;
}
