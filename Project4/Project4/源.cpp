//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
////	int max = 0;
////	max = (a > b ? a : b);
////	printf("%d\n", max);
////	return 0;
////}
//#include<stdio.h>
////int a = 0;
//void test()
//{
//	static int a = 0;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
////	int a = 0;
//	int i = 0;
//	while (i<5)
//	{
//		test();
//			i++;
//	}
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}
//extern int Add(int x , int y );
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	char ch = 'A';
//	char* pc = &ch;
//	printf("%p\n", pc);
//	*pc = 'W';
//	printf("%c\n", ch);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a = 10;
	int* p = &a;
	printf("%d\n", sizeof(p));
	return 0;
}