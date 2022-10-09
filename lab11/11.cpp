#include<stdio.h>
#include<string.h>
#include<cstdlib>

char 	DetectOperator( char [] ) ;
int		GetResult ( int , int ) ; 

int main() {
	int i ;
	int  result ;
	char equation[100] ;
	int	opertype ;
	printf( "Input : " ) ;
	gets( equation ) ;
	for( i = 0 ; i < strlen( equation ) ; i++ ) {
		if( equation[i] == '+' ){
			opertype = 1 ;
		}
		else if ( equation[i] == '-' ){
			opertype = 2 ;
		}
		else if ( equation[i] == '*' ){
			opertype = 3 ;
		}
		else if ( equation[i] == '/' ){
			opertype = 4 ;
		}
	}
	DetectOperator(equation) ;
	result = atoi(equation) ;
	GetResult(result, opertype) ;
	return 0 ;
}

char DetectOperator( char inoutput [] ) {
	int i, j, k, n ;
	int index, indexmove ;
	int posimove = 0 ;
	char strResult[100] ;
	char operat, strnumber[10][100] , holder[100] ;
	int num[100], result;
	for( i = 0 ; i < strlen( inoutput ) ; i++ ) {
		if( inoutput[i] == '+' || inoutput[i] == '-' || inoutput[i] == '*' || inoutput[i] ==  '/' ) {
			index = i ;
			operat = inoutput[i] ;
		}
	}
	for ( j = 0 ; j <= 1 ; j++ ) {
		indexmove = 0 ;
		for (k = posimove ; k < index ; k++) {
			strnumber[j][indexmove] = inoutput[k] ;
			holder[indexmove] = strnumber[j][indexmove] ;
			indexmove++;
		}
		holder[indexmove] = '\0' ; 
		posimove = posimove + index + 1 ;
		index = strlen( inoutput ) ;
		num[j] = atoi(holder) ;
	}

	if ( operat == '+' ){
		result = num[0] + num[1] ;
		itoa(result, strResult, 10) ;
		for ( n = 0 ; n < strlen(strResult) ; n++ ) {
			inoutput[n] = strResult[n];
		}
		inoutput[n] = '\0' ;
	}
	else if ( operat == '-' ){
		result = num[0] - num[1] ;
		itoa(result, strResult, 10) ;
		for ( n = 0 ; n < strlen(strResult) ; n++ ) {
			inoutput[n] = strResult[n];
		}
		inoutput[n] = '\0' ;
	}
	else if ( operat == '*' ){
		result = num[0] * num[1] ;
		itoa(result, strResult, 10) ;
		for ( n = 0 ; n < strlen(strResult) ; n++ ) {
			inoutput[n] = strResult[n];
		}
		inoutput[n] = '\0' ;
	}
	else if ( operat == '/' ){
		result = num[0] / num[1] ;
		itoa(result, strResult, 10) ;
		for ( n = 0 ; n < strlen(strResult) ; n++ ) {
			inoutput[n] = strResult[n];
		}
		inoutput[n] = '\0' ;
	}
}
int GetResult( int number, int operat ){
	printf( "Result" ) ;
	if (operat == 1) {
		printf(" of addition : %d ", number) ;
	}
	else if (operat == 2) {
		printf(" of subtraction : %d ", number) ;
	}
	else if (operat == 3) {
		printf(" of multiplication : %d ", number) ;
	}
	else if (operat == 4) {
		printf(" of division : %d ", number) ;
	}
    return 0 ;
}
