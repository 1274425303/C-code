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
		printf("������\n");
		break;
		
	case 6:
    case 7:
		printf("��Ϣ��\n"); 
		break;
	default:
		printf("�������\n");
		break;
	}
	return 0;
}
//	if (1 == day)
//		printf("����һ\n");
//	else if (2 == day)
//		printf("���ڶ�\n");
//	else if (3 == day)
//		printf("������\n");
//	else if (4 == day)
//		printf("������\n");
//	else if (5 == day)
//		printf("������\n");
//	else if (6 == day)
//		printf("������\n");
//	else if (7 == day)
//		printf("������\n");
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
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	
//	
//	else
//	{
//	 if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 100)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//	}

	/*int age = 45;
	if (age < 18)
		printf("δ����\n");
	else if (age >= 18 && age < 28)
		printf("����\n");
	else if (age >= 28 && age < 50)
		printf("׳��\n");
	else if (age >= 50 && age < 100)
		printf("����\n");
	else
		printf("�ϲ���\n");*/
    

//
//	return  0;
//}