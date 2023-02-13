#define  _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>


int main()
{
	int  ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}




	return 0;
}
/*

	int i = 0;
	while (i <= 10)
	{
		i++;
		if (i == 5)
			
			continue;
		printf("%d ", i);
		
	}

	return 0;
}*/
//{ 
//	/*while (1)
//		printf("hehe\n");*/
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case  2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//	switch (day)
//	{
//	
//	case 1:
//		if (n == 1)
//			printf("hehe\n");
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}