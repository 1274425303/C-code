#define  _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
#include<string.h>

struct Book
{
	char name[20];
	short  price;
};
int main()
{
	struct Book b1 = {"C���Գ������",55};
    struct Book *pd = &b1;
	printf("%s\n", pd->name);
	printf("%d\n", pd->price);
	/*printf("%s\n", (*pd).name);
	printf("%d\n", (*pd).price);*/
	/*printf("����:%s\n",b1.name );
	printf("�۸�:%d\n", b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�:%d\n", b1.price);*/



	/*printf("%d\n",sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));*/

	//double d = 3.14;
	//double* pd = &d;
	//printf("%lf\n", sizeof(pd));
	//*pd = 5.5;
	//printf("%lf\n", d);
	//printf("%lf\n", *pd);


	return  0;
}