#include<stdio.h>
#include<stdlib.h>

int main(void) {
	/*int* pi;
	pi = (int*)malloc(sizeof(int));
	if (pi == NULL) {
		printf("동적 메모리 할당에 실패\n");
		exit(1);
	}
	*pi = 100;
	printf("%d\n", *pi);

	free(pi);*/

	char* pc = NULL;
	int i = 0;
	pc = (char*)malloc(100 * sizeof(char));
	if (pc == NULL) {
		printf("실패");
		exit(1);
	}
	for (i = 0; i < 26; i++) {
		*(pc + i) = 'a' + i;
	}

	return 0;
}