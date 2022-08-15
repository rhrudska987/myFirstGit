//#include<unistd.h>

void is_negative(int n) {
	if (n < 0)
		write(1, '-', 1);
	else
		write(1, '+', 1);
}