#include<stdio.h>
#include<string.h>

int main(void) {
	/*char input[1001];
	gets(input);
	int count = 0;
	while (input[count] != '\0') {
		count++;
	}
	printf("�Է��� �������� ���̴� %d �Դϴ�\n", count);
	printf("%s", input);*/

	/*char input[5] = "Love";
	printf("���ڿ��� ���� : %d\n", strlen(input));*/

	/*char inputOne[5] = "A";
	char inputTwo[5] = "B";
	printf("���ڿ� �� : %d\n", strcmp(inputOne, inputTwo));*/

	char input[10] = "ABC";
	char result[5] = "Love";
	strcpy(result, input);
	printf("���ڿ� ���� : %s\n", result);
	return 0;
}