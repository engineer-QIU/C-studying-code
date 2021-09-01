#include<stdio.h>
#include<string.h>
int main()
{
	////printf("%d\n", strlen("C:\test\32\test.c"));
	//int line = 0;
	//while (line < 20)
	//{
	//	printf("Êæ¿¥Î°ÊÇÉµ±Æ\n");
	//	line++;
	//}
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	while (i <= 9)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	//printf("%d", arr[0]);
	return 0;
}