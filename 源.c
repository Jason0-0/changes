#include <stdio.h>
#include <stdlib.h>


int change()
{

	int a = 0, b = 0, c = 0, c1 = 0;//5,2,1,
	int counter = 0;
	float cash;
	int ret;
	//int minA = 0, minB = 0, minC = 0;
	int min = 1000;
	int sum[1000][4] = { {0},{0} };
	printf("������Ҫ�һ�������ҽ�������100Ԫ����");
	ret = scanf_s("%f", &cash);
	//printf("%f",cash);
	if (cash <= 0 || cash > 100 || ret == -1 || ((int)cash - cash != 0)) //illegal input check
	{
		printf("��������\n");
		fflush(stdin);
		return change();
	}
	c = (int)cash;
	while (c > 0) //
	{
		c1 = c;
		b = 0;//reset b=0
		while (c1 >= 0)// change the changes into 2s and 1s
		{
			counter++;
			printf("��%3d�ֶһ�����:%3d��5Ԫ��%3d��2Ԫ��%3d��1Ԫ����%3d��Ǯ��\n", counter, a, b, c1, a + b + c1);

			sum[counter - 1][3] = a + b + c1;
			sum[counter - 1][0] = a;
			sum[counter - 1][1] = b;
			sum[counter - 1][2] = c1;
			/*if(min>a+b+c1)
			{
				min=a+b+c1;
				minA=a,minB=b,minC=c1;
			}*/
			b++;
			c1 = c1 - 2;
		}
		a++;
		c = c - 5;

	}
	/*�������ȴ�С*/
	int i = 0;
	int m;
	for (i; 1; i++)
	{
		//int min=1000;
		if (sum[i][3] == 0)
			break;
		if (sum[i][3] < min)
		{
			min = sum[i][3];
			m = i;
		}

	}
	printf("���Ŷһ�����:%3d��5Ԫ��%3d��2Ԫ��%3d��1Ԫ����%3d��Ǯ��\n", sum[m][0], sum[m][1], sum[m][2], sum[m][3]);

	return 0;
}