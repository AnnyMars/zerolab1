#include <stdio.h>
int main() {
	int a, b, c;
	printf("Enter numb\n");
	scanf("%d", &a);
	printf("\nEnter numb");
	scanf("%d", &b);
	printf("\nEnter numb");
	scanf("%d", &c);
	if (c != 0) {
		printf("\n%d", a % c);
	}
	else {
		printf("\nInvalid");
		return -1
	}
	
	

	
	

	return 0;
}