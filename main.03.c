#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i; 
	int j;
	
	printf("분자를 입력하세요:");
	scanf("%d", &i);
	
	printf("분모를 입력하세요:");
	scanf("%d", &j);
	

	printf("나누기의 결과는 %f 입니다\n", (float)i/j);
	return 0;
}
