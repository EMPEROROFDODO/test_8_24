#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//	printf("请确认密码：(Y/N)\n");
//	getchar();
//	int ch = getchar();
//	if (ch  == 'Y')
//		printf("输入成功\n");
//	else
//		printf("输入失败\n");
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while((ch = getchar())!= EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);;
//	}
//	return 0;
//}

// I feel very odd !


//n的阶乘
//int main()
//{
//	int sum = 1;
//	int n = 0;
//	scanf("%d",& n);
//	do
//	{
//		sum *= n;
//		n -= 1;
//	} while (n > 0);
//	printf("%d", sum);
//	return 0;
//}



//计算1!+2!+3!……n！
//int main()
//{
//	int Sum = 0;
//	int sum = 1;
//	int n = 0;
//	scanf("%d", &n);
//	int i = n;
//	for (i = i; i > 0; i -= 1)
//		n = i;
//	do
//	{
//		sum *= n;
//		n -= 1;
//	} while (n > 0);
//	{Sum += sum;
//}
//		
//	printf("%d", Sum);
//	return 0;
//}


//int main()
//{
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d",& n);
//	for(;;)
//	return 0;
//}


int main()
{
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}