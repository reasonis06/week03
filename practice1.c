#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char c;
	int i;
	
	printf("input number: ");
	scanf("%c", &c);
	
	i = c - '0';
	printf("The input number is %i\n", i); // ASCII 값은 0~9까지 각각 48~57이다.  ASCII값의 차이 이용. 
	
	return 0;
}
