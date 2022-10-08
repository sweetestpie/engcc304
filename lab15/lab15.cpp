#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Employee{
	char name[100];
	int age ;
	float salary ;
	char job[100] ;
}typedef worker;
	
int takedata( worker [] ) ;
void showdata( worker [], int ) ;
void cyclemax( float , worker [], int, char []) ;
	
int main(){
	worker dataE[100] ;
	int countL ;
	countL = takedata( dataE ) ;
	printf("--------------------------------------\n") ;
	showdata( dataE, countL ) ;
	return 0 ;
}

int takedata( worker arrset[] ) {
	int count = 0 ;
	FILE *fp ;
	fp = fopen( "Employee.txt", "r" );
	if (fp == NULL ){
		printf( "ERROR : NOT FOUND DATA FILE!" ) ;
		exit( 0 ) ;
	}
	fscanf( fp, "%s\t%s\t%s\t%s\n", arrset[0].name, arrset[0].name, arrset[0].name, arrset[0].name ) ;
	
	for (int i = 0 ; i < 100 ; i++){
		
		if (fscanf( fp, "%s\t%d\%f\t%s\n", arrset[i].name, &arrset[i].age, &arrset[i].salary, arrset[i].job ) != EOF) {
			count++ ;
			printf("%s\t%d\t%.2f\t%s\n", arrset[i].name, arrset[i].age, arrset[i].salary, arrset[i].job) ;
		}
		else{
			break ;
		}	
	}
	fclose(fp) ;
	return count ;
}
void showdata( worker arrin[], int countL ) {
	float cmp_salary = -999999999 ;
	char Ajob[100][100] = {"Programmer", "Support", "Advisor", "Founder", "HR"} ;
	char jobHolder[100] ;
	for ( int i = 0 ; i < 5; i++ ){
		for ( int j = 0 ; j < 100 ; j++){
			if ( Ajob[i][j] == '\0' ){
				jobHolder[j] = '\0' ;
				break;
			}
			jobHolder[j] = Ajob[i][j] ;
		}
		cyclemax(cmp_salary, arrin, countL, jobHolder);
	}
}

void cyclemax( float cmp, worker arrin[], int countL, char operation[]) {
	char *name ;
	for (int i=0 ; i < countL ; i++ ){
		if (strcmp(arrin[i].job, operation) == 0 ) {
			if (arrin[i].salary > cmp){
				cmp = arrin[i].salary ;
				name = arrin[i].name ;
			}
		
		}	
	}
	printf("%s : %s %.f bath\n",operation, name, cmp) ;
}
