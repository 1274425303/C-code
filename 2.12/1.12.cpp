#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (5==i)
			continue;

		printf("%d ", i);
	}
	return 0;
}
//{
//	int i = 0;
//	while (i < 10)
//	{
//		  
//	}
//
//
//	return 0;
//}
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF)
//	{
//		if(ch<'0'||ch>'9')
//			continue;
//		putchar(ch);
//
//	}
//
//	return 0;
//}
	/*int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}*/
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n');
//	{
//		;
//	}
//	printf("请确认(Y\N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//
//	}
//
//	return  0;
//}