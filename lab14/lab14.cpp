#include<stdio.h>
#include<string.h>
struct Employee{
	char Name[100] ;
	int age ;
	float Salary ;
	char Job[100] ;
}typedef emp ; 

int main() {
	emp worker[100] ;
	int i ;
	int oldest = -999999999 ;
	char *oldest_name ;
	char *oldest_job ;
	float lowestSal = 999999999999; 
	char *lowestSal_name ;
	int *lowestSal_age ;
	char *lowestSal_job ;
	char name[100][100] = {"Pong", "Sorn", "Aoy", "Ying", "Yot", "Pot", "Vop"} ;
	int age[100] = {32, 25, 24, 26, 28, 31, 25} ;
	float salary[100] = { 45000, 23000, 33250, 34550, 50000, 24500, 25450 } ;
	char job[100][100] = { "Programmer", "Support", "Advisor", "Programmer", "Founder", "HR", "Programmer"} ;
	char holdername[100], holderjob[100] ;
	
	for ( i = 0 ; i < 7 ; i++) {
		for ( int j = 0 ; j < 100 ; j++ ) {
			if ( name[i][j] == NULL ) {
				holdername[j] = '\0' ;
				break;
			}
			else {
				holdername[j] = name[i][j] ;
			}
		}
		for ( int k = 0 ; k < 100 ; k++ ) {
			if ( job[i][k] == NULL ) {
				holderjob[k] = '\0' ;
				break;
			}
			else {
				holderjob[k] = job[i][k] ;
			}
		}
		strcpy( worker[i].Name, holdername)  ;
		strcpy( worker[i].Job, holderjob)  ;
		holdername[0] = '\0' ;
		holderjob[0] = '\0' ;
		worker[i].age = age[i] ;
		worker[i].Salary = salary[i] ;
	}
	for ( int j = 0 ; j < i; j++ ) {
		if( worker[j].age > oldest ) {
			oldest = worker[j].age ;
			oldest_name = worker[j].Name ;
			oldest_job = worker[j].Job ;
		}
		if( worker[j].Salary < lowestSal ){
			lowestSal = worker[j].Salary ;
			lowestSal_name = worker[j].Name ;
			lowestSal_age = &worker[j].age ;
			lowestSal_job = worker[j].Job ;
		}
	}
	printf("Oldest = %s (%d) %s ", oldest_name, oldest, oldest_job) ;
	printf("\nLowest Salary = %s (%d) %.f %s ", lowestSal_name, *lowestSal_age, lowestSal, oldest_job ) ;
}
