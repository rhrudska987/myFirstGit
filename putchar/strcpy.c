char* strcpy(char* dest, char* src) {
	int i = 0;
	while (src[i]) {
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	//dest[i] = '\0';
	return dest;
}