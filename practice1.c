#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char c;
	int i;
	
	printf("input number: ");
	scanf("%c", &c);
	
	i = c - '0';
	printf("The input number is %i\n", i); // ASCII ���� 0~9���� ���� 48~57�̴�.  ASCII���� ���� �̿�. 
	
	return 0;
}
