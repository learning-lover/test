#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


void menu()
{
	printf("*****��ӭ������������Ϸ*****\n");
	printf("*****  1.play  0.exit  *****\n");
	printf("****************************\n");
}
void game()
{
	int ret = 0;
	int guess = 0;//���ܲµ�����
	ret = rand()%100+1;//����1-100֮��������
	while (1)
	{
		printf("�������:>");
		scanf_s("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();//�����ֵĹ���
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);

	return 0;
}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("��������1��10�������в�����");
//
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		int a = 0;
//		scanf("%d ", &a);
//		if (arr[a] > k)
//		{
//			right = a - 1;
//			printf("����%d��%d������\n", left, right);
//		
//		}
//		else if (arr[a] < k)
//		{
//			left = a + 1;
//			printf("����%d��%d������\n", left, right);
//
//		}
//		else
//		{
//			printf("��¶���������\n");
//			break;
//		}
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	while (left <= right)
//	{
//		int min = (left + right) / 2;
//		if (arr[min] > k)
//		{
//			right = min - 1;
//		}
//		else if (arr[min] < k)
//		{
//			left = min + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d", min);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���");
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
//	{
//		int min = (left + right) / 2;
//		if (arr[min] > k)
//			right = min - 1;
//		else if (arr[min] < k)
//			left = min + 1;
//		else
//		{
//			printf("�ҵ��ˣ��±���:%d", min);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���");
//	return 0;			//������������Ѱ������
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d  ", i, j, i * j);
//			//Sleep(1000);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	double sum1 = 0, sum2 = 0;
//	double sum = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 2 == 1)
//		{
//			sum1 += 1.0 / a;
//		}
//		if (a % 2 == 0)
//		{
//			sum2 += 1.0 / a;
//		}
//		sum = sum1 - sum2;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf \n", sum);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int count = 0;
//	for (a = 0; a < 101; a++)
//	{
//		if (a % 10 == 9)count++;
//	}
//	printf("%d ", count);
//}
//
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b + 5;
//	}
//	printf("%d ", a);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\n%d ", count);
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\n%d ", count);
//	return 0;
//}
//
//int main()
//{
//	int i = 1000;
//	int count = 0;
//	for (i = 1000; i < 2001; i++)
//	{
//		if(i%4==0 && i%100!=0)
//		{
//			printf("%d  ", i);
//			count++;
//		
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d ",i);
//			count++;
//		}
//		
//	}
//	printf("\n  %d\n ", count);
//	return 0;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d %d", &m, &n);
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d", n);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		printf("%d > %d", a,b);
//		if (c > a)
//		{
//			printf("%d > %d > %d", c, a, b);
//		}
//	}
//	else
//	{
//		printf("%d > %d", b,a);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1: 
//	{
//		switch (y)
//		{
//		case 1:printf("first");
//		case 2:printf("second");
//			break;
//		default:printf("hello");
//		}
//	}
//	case 2:printf("third");
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��������ɹ�");
//			break;
//		}
//		else
//		{
//			printf("��������ʧ��\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("���������ʧ�ܣ�����ʮ�������");
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	//int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		//system("");
//		left++;
//		right--;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
//	{
//		int min = (left + right) / 2;
//		if (arr[min] > k)
//			right = min - 1;
//		else if (arr[min] < k)
//			left = min + 1;
//		else
//		{
//			printf("�ҵ��ˣ��±���:%d", min);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���");
//	return 0;			//������������Ѱ������
//}
//
//int main()
//{
//	//int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//scanf("%d", &n);
//	for (n = 1; n <= 3; n++)//  ���� sum = 1��+2��+3��
//	{
//
//			ret = ret * n;
//		
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//scanf("%d", &n);
//	for (n = 1; n <= 3; n++)//  ���� sum = 1��+2��+3��
//	{
//		ret = 1;//ÿ��ѭ������ʼ�� ret ��ֵ
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//	return 0;
//}
//
//
//int main()
//{
//	int a = 1;
//	int b = 1;
//	for (a = 1; a < 10; a++)
//		if (a == 5)
//			break;
//		printf("f");
//	
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = a * (a - 1) * (a - 2);
//	printf("%d", b);
//	return 0;
//}
//
//int main()
//{
//	int a,b,c;
//	//int b = 0;
//	//int c = 0;
//	int max;
//	//printf("������a:\n b:\n c:\n");
//	//scanf("%d %d %d", &a, &b, &c);
//	printf("������a  b  c\n");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		max = a;
//	}
//	else
//		max = b;
//	if (max < c)
//		max = c;
//	printf("%d", max);
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; ++i)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int ret = 0;
//	int b = 0;
//	//int password = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	//password = getchar();
//	scanf("%s\n", password);
//	while ((b = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	//printf("����C����\n");
//	while ( a<=10)
//	{
//		if (a == 5)
//			continue;
//		printf("%d\n",a);
//		a++;
//	}
//	//printf("�ɹ�");
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++;
//			break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);//m=5 n=3
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (day >= 1 && day <= 5)
//		printf("������");
//	else if (day == 6 && day == 7)
//		printf("��Ϣ��");
//	return 0;
// }
//int main()
//{
//	int i =1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		printf("%d ", i);
//		i++;		
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("����������: ");
//	scanf("%d", &a);
//	int b = a % 2;
//	if (0 == b)
//		printf("ż��");
//	else
//		printf("����");
//	return 0;
//}
 
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	else
//		printf("juju");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//
//	printf("����ɹ���");
//	scanf_s("%d", &a);
//	if (a==10)
//		printf("�ɹ�");
//	else
//		printf("ʧ��");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("����ɹ���(0/1/2)>:");
//	
//	scanf("%d", & a);
//	if (a=0)
//		printf("�����޸������");
//	else if (a=1)
//		printf("����ѡ��Ҳ����");
//	else
//		printf("lower");
//	return 0;
//}
//struct book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct book a1 = { "C���Գ������",55 };
//	strcpy(a1.name, "c++");
//	printf("%s\n", a1.name);
//	/*a1.name = "c++";*/
//	//struct book* pa = &a1;
//	///*printf("%s\n", pa->name);
//	//printf("%d\n", pa->price);*/
//	//printf("%s\n", (*pa).name);
//	//printf("%d\n", (*pa).price);
//	/*printf("������:%s\n", a1.name);;
//	printf("�۸���:%d\n", a1.price);
//	a1.price = 15;
//	printf("�޸ĺ�ļ۸�:%d\n", a1.price);*/
//	return 0;
//}
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c+=1;
//	b+=2;
//	return(a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++);
//	{
//		printf("%d\n", sum(a));
//	}
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//printf("%p\n", p);
//	//printf("%p\n", &a);
//	//*p = 20;
//	printf("%d\n", sizeof(char*));
//	return 0;
//}


//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//#define MAX(X,Y) (X>Y?X:Y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("%d\n", max);
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//
//	return 0;
// }
//int main()
//{
//	extern int fffd;
//	printf("%d\n", fffd);
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a;
//	printf("%d %d", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������������:");
//	scanf("%d %d", &a, &b);
//	if (a > b)
//		printf("%d\n", a);
//	else
//		printf("%d\n", b);
//	return 0;
//}
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = Max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = 20;
//	int b = 40;
//	
//	if (a > b)
//		printf("�ϴ�ֵ��:%d\n", a);
//	else
//		printf("�ϴ�ֵ��:%d\n", b);
//	return 0;
//}

//int main()
//{
//	char ch[10] = "hello bit";
//	printf("%d\n",strlen("ch"));
//	return 0;
//}




//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	while (i <10)
//	{
//		printf("%d",a[i]);
//		i++;
//	}
//	return 0;
//}


//int add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 12345;
//	int num2 = 56789;
//	int sum = 0;
//	sum = add(num1, num2);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d\n", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	printf("�������\n");
//	
//	while (n <300)
//	{
//		printf("�ô���;%d\n", n);
//		n++;
//	}
//	if (n >=300)
//		printf("��offer\n");
//	return 0;
//}





//int main()
//{
//	int A = 0;
//	printf("���뺫ʦ\n");
//	printf("��Ҫ�ú�ѧϰ��(5/6)>:");
//	scanf("%d", &A);
//	if (A == 5 )
//		printf("�õ�һ����offer\n");
//	else
//		printf("������\n");
//
//	return 0;



//int main()
//{
//	printf("%d\n ",strlen("c:\\test\\32\\test.c"));
//	return 0;
//}
//
//int main()
//{
//	char aeer [] = "abc";
//	char aeee [] = { 'a', 'b', 'c'};
//	printf("%d\n", strlen(aeer));
//	printf("%d\n", strlen(aeee));
//	return 0;
//}
////#define a 20

//enum C
//{
//	A,
//	B
//	
//};

//int main()
//{
//	printf("%d\n", A);
//	printf("%d\n", B);
//	return 0;
//#include<stdio.h>
//int main()
//{
//	int num = 4;
//	printf("%d\n", num);
//	num = 5;
//	printf("%d\n", num);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	printf("%d\n", sizeof(char)); 
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double)); 
//	return 0;
//}

//#include<stdio.h>
//int a = 100;
//int main()
//{
//	int b = 10;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{;
//	printf("sdrdrhdrxhsr\n");
//	return 0;
//}



