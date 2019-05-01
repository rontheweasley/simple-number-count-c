#include <stdio.h>

int main() {
	
	
	int number,total,counter;
	float average;
	
	do {
		
		printf("Type number (just positive numbers) : ");
		scanf("%d", &number);
		if(number <= 0) {
			
			printf("Number is equal or under zero.\n");
			--counter;
			break;
			
		}
		else {
			
			total+=number;
			++counter;
			
		}
	
	} while(number >= 0);

	average = total / counter;
	printf("Total is %d of %d number, average is %g.",total,counter,average);
	
	return 0;
}
