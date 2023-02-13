#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
		
	case 6:
    case 7:
		printf("休息日\n"); 
		break;
	default:
		printf("输入错误\n");
		break;
	}
	return 0;
}
//	if (1 == day)
//		printf("星期一\n");
//	else if (2 == day)
//		printf("星期二\n");
//	else if (3 == day)
//		printf("星期三\n");
//	else if (4 == day)
//		printf("星期四\n");
//	else if (5 == day)
//		printf("星期五\n");
//	else if (6 == day)
//		printf("星期六\n");
//	else if (7 == day)
//		printf("星期七\n");
//		return 0;
//}
////int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//        i+=2;
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 != 0)
//			printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (5 == num)        
//	{
//		printf("hehe\n");
//	}
//	return  0;
//}


//int main()
//{
//	int num = 4;
//	if (num = 5)
//	{
//		printf("hehe\n");
//	}
//	return  0;
//}
//int main()
//{
//	int age = 16;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	
//	
//	else
//	{
//	 if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 100)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//	}

	/*int age = 45;
	if (age < 18)
		printf("未成年\n");
	else if (age >= 18 && age < 28)
		printf("青年\n");
	else if (age >= 28 && age < 50)
		printf("壮年\n");
	else if (age >= 50 && age < 100)
		printf("老年\n");
	else
		printf("老不死\n");*/
    

//
//	return  0;
//}