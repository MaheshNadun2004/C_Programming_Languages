#include<stdio.h>
int main(){
	
	int a , b , c;
	printf("Enter three numbers: ");
	scanf("%d %d %d" ,&a , &b , &c);
	
	if( a > b){
		if( a > c){
			printf("Lagest number is %d" , a);
		}
		else{
			printf("Lagest number is %d" , c);
		}
	}
	else{
		if( b > c){
			printf("Lagest number is %d" , b);
		}
		else{
			printf("Lagest number is %d" , c);
		}
	}
	return 0;
	
}
