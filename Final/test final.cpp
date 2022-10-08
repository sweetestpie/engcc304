#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct agepeople {
	int num ; 
	char name[ 100 ] ; 
	char date[ 100 ] ; 
} typedef age ; //keyword

int takeinfor ( age [] ) ; 
void showinfor ( age [], int count) ; 

int main(){
    age person[ 100 ] ; 
	int num ; 
	num = takeinfor( person ) ;
	printf("\n") ; 
	showinfor( person, num ) ;
	return 0 ;
}

int takeinfor( age person[] ) {
	FILE *fp ; 
	int count ;
	fp = fopen( "aa.txt", "r" ) ;
	fscanf(fp,  "%s\t%s\t\t%s\n", person[ 0 ].name, person[ 0 ].name, person[ 0 ].name ) ;
	for (int i = 0 ; i < 100 ; i++){
		if (fscanf( fp, "%d\t%s\t\t%s\n", &person[ i ].num, person[ i ].name, person[ i ].date) != EOF) {
			count++ ;
		}
		else {
			break ;
		}	
	}
	fclose( fp ) ;
	return count ; 
}

void showinfor ( age person[], int count) {
	int oldest = -99999999 ; 
	int youngest = 999999999 ; 
	char holderall[ 100 ], holder[ 100 ] ;
	int year, month, day ;
	char *pointname ;
	int all[ 100 ] ;
	for (int i = 0 ; i < count ; i++) {
		strcpy(holderall, person[i].date) ;
		for(int j = 0 ; j < 4 ; j++ ) {
			holder[ j ] = holderall[ j ] ;
		}
		holder[4] = '\0' ;
		year = atoi( holder ) ;
		for(int j = 0 ; j < 2 ; j++ ) {
			holder[ j ] = holderall[ j + 5 ] ;
		}
		holder[ 2 ] = '\0' ;
		month = atoi( holder ) ;
		for(int j = 0 ; j < 2 ; j++ ) {
			holder[ j ] = holderall[ j + 8 ] ;
		}
		holder[ 2 ] = '\0' ;
		day = atoi( holder ) ;
		all[ i ] =  ( 2018 - year ) * 365 + ( 6 - month ) * 30 + ( 21 - day ) ;// 
		printf("%s %d Years, %d Months\n", person[ i ].name, all[ i ]/ 365, ( all[ i ] % 365) / 30 ) ;
	}
	
	for (int k = 0; k < count ; k++) {
		if ( all[ k ] > oldest ) {
			oldest = all[ k ] ;
			pointname = person[ k ].name ;
		}
	}
	printf( "\nMax : %s [%d Years, %d Months]\n", pointname, oldest/365, (oldest%365)/30) ;

	for (int k = 0; k < count ; k++) {
		if ( all[ k ] < youngest) {
			youngest = all[ k ] ;
			pointname = person[ k ].name ;
		}
	}
	printf( "Min : %s [%d Years, %d Months]", pointname, youngest/365, (youngest%365)/30) ;
}
