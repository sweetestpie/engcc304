#include<stdio.h>

int main(){
	
	int i;

	
	printf("Input : ");
	scanf("%d" ,&i);
	int j = 1;
	while ( i >= j){
		
	if((i==1 || i%2 == 0 || i%3 == 0 || i%5==0 || i%7==0) 
            && (i!=2 && i!=3 && i!=5 && i!=7)){
            	i--;
            continue;
        }
 
        printf(" %d", i);     
		--i;
	}
	return 0;
}
