#include<stdio.h>
#include<string.h>
struct employee{
	char name[100] ;
	float salary;
}typedef dataw ;

int main(){
	dataw worker[100] ;
	char *name ;
	int breaker = 1;
	int numworker = 0 ;
	float sum = 0 ;
	float max = -999999999 ;
	float *tomoney ;
	char check[100] = "-1" ;
	while( breaker != 0 ){
		printf( "Employee %d's Name : ", numworker+1) ;
		scanf( "%s", worker[numworker].name) ;
		name = worker[numworker].name ;
		breaker = strcmp( name , check ) ;
		if ( breaker == 0){
			break ;
		}
		
		printf( "Salary (Bath/Month) : " ) ;
		scanf( "%f", &worker[numworker].salary ) ;
		numworker++;
	}
	for (int i = 0 ; i < numworker  ; i++) {
		sum = sum + worker[i].salary ;
		if (worker[i].salary > max)
		{
			max = worker[i].salary ;
			name = worker[i].name ;
			tomoney = &(worker[i].salary) ;

		}
	}
	printf( "------------------------------------------\n") ;
	printf( "All salary per month : %.2f Bath\n", sum) ;
	printf( "All salary per year : %.2f Bath\n", sum*12) ;
	printf( "Tax (7%% per year) : %.2f Bath\n", sum*12*7/100) ;
	printf( "Most tax in company : %s( %.2f Bath per year)", name, *tomoney*12*7/100 ) ;
	
}


