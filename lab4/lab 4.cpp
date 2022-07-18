#include <stdio.h>
int main(){
	int emp_id;
	int hours;
	float amount;
	printf("Input the Employees ID (Max. 10chars) : ");
	scanf("%d", &emp_id);
	printf("Input the working hrs : ");
	scanf("%d", &hours);
	printf("Salary amount/hr (Bath) : ");
	scanf("%f", &amount);
	
	printf("---\n");
	printf("Expected Output : \n");
	printf("Employees ID = %d \n", emp_id);
	printf("Amount/day = %.2f Bath(s)", amount*hours);
	return 0;
}

	
	

