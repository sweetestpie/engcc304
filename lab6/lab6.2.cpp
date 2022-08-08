#include<stdio.h>

int main(){
	int num;
	printf("input your lines :");
	scanf("%d", &num);
	for(int i = 1; i <= num ; i++) { 
		for(int a = 1; a <= i; a++) {
			printf (" ");
	    }
		for (int a = num; a >= i; a--) {
			printf ("*");
		}
		printf ("\n");
	}
	return 0;	
}
