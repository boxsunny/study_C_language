#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *p = malloc(sizeof(char)*20);
	scanf("%s", p);
	printf("%d", strlen(p));
	free(p);
	return 0;
}