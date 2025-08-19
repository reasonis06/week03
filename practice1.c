#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char a;
	
	printf("enter a character: ");
	scanf("%c", &a);
	
	char b = a + 1; // 문자 변수에 1을 더하면 ASCII값이 1커진다. 
	printf("The next chracter of %c (%i) is %c(%i)", a, a, b, b); // 문자 변수를 숫자(ASCII값)로 표현할 때는 %i 사용. 
	
	return 0;
}
