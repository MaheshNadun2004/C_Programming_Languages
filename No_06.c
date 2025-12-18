#include<stdio.h>
//char name [] = {"Student 1" ,"Student 1" ,"Student 1" ,"Student 1" ,"Student 1"  };
int Maths [] = {95,76,54,32,85};
int Science [] = {88,65,49,40,79};
int English [] = {90,72,60,28,92};

char getGrade(int mark){
	
	if( mark >= 90){
		return 'A';
	}
	else if (mark >= 80){
		return 'B';
	}
	else if (mark >= 70){
		return 'C';
	}
	else if (mark >= 60){
		return 'D';
	}
	else {
		return 'E';
	}
	
}

int main(){
	
	int i;
	for(i=0 ; i<5 ; i++){
		printf("--- Result for Student %d \n" , (i+1));
		printf("Maths Grade: %c \n" , getGrade(Maths[i]));
		printf("Science Grade: %c \n" , getGrade(Science[i]));
		printf("English Grade: %c \n" , getGrade(English[i]));
		printf("Total Marks: %d \n\n" , (Maths[i]+Science[i]+English[i] ) );
		
	}
	return 0;
}












