#include<stdio.h>

int main(){
	int num;
	printf("input your line :");
	scanf("%d", &num);
	if (num % 2 == 0){ 	
		for(int i = 1; i <= num; i++){
			for(int a = num-1; a >= i; a--){
				printf (" ");	
			}
			for(int a = 1; a <= i; a++ ){
				printf("* ");
			}
			printf("\n");
	} 
	}
	else{
		for(int i = 1; i <= num ; i++){
			for(int a = 1; a <= i; a++){
				printf (" ");
			}
			for (int a = num; a >= i; a--){
				printf (" *");
			}
			printf ("\n");
	}
	}
	return 0;
}


