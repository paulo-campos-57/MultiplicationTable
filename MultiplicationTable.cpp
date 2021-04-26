#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void cleanScreen(){
	system("CLS");			//Only Windows
}

void multiplicationTable(int value){
	int i;
	int result;
	for(i = 1; i <= 10; i++){
		result = value * i;
		printf("\n%d * %d : %d", value, i, result);
	}
}

int main(){
	int num = 1;
	while(num != 0){
		printf("Type the number to receive it's multiplication table(type 0 to exit):");
		scanf("%d",&num);
		multiplicationTable(num);
		
		printf("\n\n\n\nType any key to continue...");
		getch();
		cleanScreen();
	}
}

