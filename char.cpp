#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	/*char a[] = "i am happy" ;
	printf("%s", a);*/
	char a[90]="woai zhongguo";
	char b[] = "wo ai zhongguo";
	if (strcmp(a, b) == 0)
		printf("%s=%s", a, b);
	else
		printf("%s!=%s", a, b);
	strcat(a, b);
	printf("\n%s", a);
}