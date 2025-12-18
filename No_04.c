#include<stdio.h>
int main(){
	int marks ; 
	char grade;
	printf("Enter marks: ");
	scanf("%d" , &marks);
	
	if(marks > 90){
		grade = 'A';
	}
	else if(marks > 75){
		grade = 'B';
	}
	else if(marks > 65){
		grade = 'C';
	}
	else if(marks > 55){
		grade = 'D';
	}
	else{
		grade = 'E';
	}
	printf("Your Grade is a %c grade." , grade );
	return 0;
}
