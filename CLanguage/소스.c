#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	char o;
	int x, y;
	printf("���� �Է� : ");
	scanf("%d %c %d", &x, &o, &y);
	if (o == '+') {
		printf("%d", x + y);
	}
	return 0;
}