#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student {
	int number;
	char name[10];
	double grade;
};

int main(void) {
	struct student s;
	scanf_s("%d", &s.number);
	printf("�й� : %d\n", s.number);
	scnaf_s("%s", s.name);
	printf("�̸� : %s\n", s.name);
	scanf_s("%lf", &s.grade);
	printf("�й� : %.1f\n", s.grade);
}