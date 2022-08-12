#include<stdio.h>
#include<string.h>

int main(void) {
	/*char input[1001];
	gets(input);
	int count = 0;
	while (input[count] != '\0') {
		count++;
	}
	printf("입력한 문제열의 길이는 %d 입니다\n", count);
	printf("%s", input);*/

	/*char input[5] = "Love";
	printf("문자열의 길이 : %d\n", strlen(input));*/

	/*char inputOne[5] = "A";
	char inputTwo[5] = "B";
	printf("문자열 비교 : %d\n", strcmp(inputOne, inputTwo));*/

	char input[10] = "ABC";
	char result[5] = "Love";
	strcpy(result, input);
	printf("문자열 복사 : %s\n", result);
	return 0;
}