#include<stdio.h>
char* strncpy(char *dest, char *src, unsigned int n) {
	unsigned int i;
	i = 0;
	while ((src[i] != '\0') && (i < n)) {
		dest[i] = src[i];
		i++;
	}
	while (i < n) {
		dest[i] = '\0';
		i++;
	}
	//dest[i] = '\0';
	return dest;
}

int main(void) {
	char dest[9] = "asdfsdgs";
	char src[13] = "aaabbbbccccc";
	char* t = strncpy(dest, src, 15);
	printf("%s", t);
	return 0;
}