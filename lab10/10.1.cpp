#include<stdio.h>
#include<string.h>

int main(){

	char first[100] ;
	int i ;
	printf("Enter your first name:") ;
	scanf("%[^\n]%*c", &first ) ;
	
	int let = strlen(first) ;
	for(i = 0 ; let >= 0 ; let-- ){
		printf( "%c",first[let] ) ;
		
	}
return 0 ;
}
	
