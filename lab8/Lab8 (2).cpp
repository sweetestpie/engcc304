#include <stdio.h>

int main(){
	int  a , count;
	printf("Input Array Size : ");
	scanf("%d",&a);
	
	int s[a] ;
	
	for(int i = 0; i<a ; i++){ 
		printf("Array [%d] : ",i);
		scanf("%d",&s[i]);
	}

	

	for(int i = a-1; i>=0 ; i--){
		count = 0;
		for(int j = a-1; j>=0 ; j--){ 
			if(s[i]==s[j]&&i!=j){
				break;
			}
			count++;
			if(count==a){ 
				printf("%d ",s[i]);
				break;
			}
		}
	}

	return 0;
}
