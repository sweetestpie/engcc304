#include <stdio.h>
int main (){
	
	int number;
	float d;
	char l;
	
	printf ("please enter value :");
	scanf ("%d %f %c", &number ,&d ,&l );
	printf("answer = %d %.2f %c", number , d , l);
	return 0;
}
