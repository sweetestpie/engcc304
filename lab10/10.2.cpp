#include<stdio.h>
#include<string.h>

int main(){

	char first[100] ;
	int i = 0;
	printf("Enter your first name:") ;
	scanf("%[^\n]%*c", &first ) ;
	
	int let = strlen(first) ;
	while(let >= 0){
		printf( "%c",first[let] ) ;
		let-- ;
	}
return 0 ;
}
	


