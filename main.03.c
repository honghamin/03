#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i; 
	int j;
	
	printf("���ڸ� �Է��ϼ���:");
	scanf("%d", &i);
	
	printf("�и� �Է��ϼ���:");
	scanf("%d", &j);
	

	printf("�������� ����� %f �Դϴ�\n", (float)i/j);
	return 0;
}
