//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("please enter your age!\n");
//	scanf_s("%d", &a);
//	if (a < 18)
//		printf("δ����\n");
//	else if (18 <= a && a < 28)
//		printf("����\n");
//	else if (a >= 28 && a < 50)
//		printf("����\n");
//	else if (a >= 50 && a < 130)
//		printf("����\n");
//	else
//		printf("unbelievable!\n");
//	return 0;
//}
#include<stdio.h>
int main()
{
	int i = 0;
	while ( i <= 100)
	{
		if (i % 2 == 1)
			printf("%d ", i);
		i++;

	}
	return 0;
}