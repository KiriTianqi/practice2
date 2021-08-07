#include <stdio.h>
int main()
{
	/*int a = 0;*/


	/*scanf_s("%d", &a);*/
	/*if (a % 2 == 0)
		printf_s("this number is not odd");
	else
		printf_s("this number is odd");*/
	for (int c = 1; c<=100;c++)
	{
		if (c%2!=0)
			printf_s("%d\t", c);
	}
	/*int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");*/
	return 0;
}